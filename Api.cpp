//
// Created by kpilavov on 30.03.23.
//

#define FIRST_6_USERS_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/users?page=1&count=6"
#define POSITIONS_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/positions"
#define TOKEN_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/token"

#include <iostream>
#include "Api.h"
#include "UserBuilder.h"


Api::Api() : m_linkToNextUserPage(FIRST_6_USERS_LINK){
    m_curl = curl_easy_init();
    if (!m_curl) {
        std::cerr << "Error: Curl failed to initialize" << std::endl;
        exit(1);
    }

    curl_easy_setopt(m_curl, CURLOPT_WRITEFUNCTION, Api::writeCallback);
}


// This is the callback function that will be called by cURL
// when it receives data from the API
size_t Api::writeCallback(char *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append(contents, size * nmemb);
    return size * nmemb;
}


void Api::get6Users(){
    CURLcode res;
    std::string response;
    json result;

    sendRequest(res, response, m_linkToNextUserPage);

    result = json::parse(response);

    if ( result["links"]["next_url"] == nullptr )
        m_linkToNextUserPage = "";
    else
        m_linkToNextUserPage = result["links"]["next_url"];

    parseGetUsersResponse(result);
}


Api::~Api() {
    // Clean up cURL
    curl_easy_cleanup(m_curl);
}

void Api::sendRequest(CURLcode& res, std::string& response, const std::string& requestLink) const{
    // Use a lambda function to set CURLOPT_URL
    auto setUrlLambda = [](CURL* curl, const std::string& url) -> CURLcode {
        return curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    };
    setUrlLambda(m_curl, requestLink);

    curl_easy_setopt(m_curl, CURLOPT_WRITEDATA, &response);

    // Send the HTTP request
    res = curl_easy_perform(m_curl);

    // Check for errors
    if (res != CURLE_OK)
    {
        std::cerr << "Error: " << curl_easy_strerror(res) << std::endl;
    }
}

std::string Api::getToken() const {
    CURLcode res;
    std::string response;
    json result;

    sendRequest(res, response, TOKEN_LINK);

    // Print the API response
    result = json::parse(response);

    return result["token"];

}

std::vector<std::string> Api::getPositions() const{
    CURLcode res;
    std::string response;
    json result;

    sendRequest(res, response, POSITIONS_LINK);

    // Print the API response
    result = json::parse(response);

    std::vector<std::string> positions;

    for (auto& position : result["positions"]) {
        positions.push_back(position["name"]);
    }

    return positions;
}

void Api::parseGetUsersResponse(const json &j) const {
    for (auto& user : j["users"])
    {
        addClientToUi(UserBuilder()
                                  .setName(user["name"])
                                  .setEmail(user["email"])
                                  .setPosition(user["position"])
                                  .setPhoneNumber(user["phone"])
                                  .build());
    }

}

void Api::addClientToUi(const User &user) const {
//    std::cout << user.getName() << std::endl;
    // add client to UI
}
