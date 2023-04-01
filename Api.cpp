#define FIRST_6_USERS_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/users?page=1&count=6"
#define POSITIONS_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/positions"
#define TOKEN_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/token"
#define FORM_LINK "https://frontend-test-assignment-api.abz.agency/api/v1/users"

#include <iostream>
#include "Api.h"
#include "UserBuilder.h"
#include <QDebug>

Api::Api() : m_linkToNextUserPage(FIRST_6_USERS_LINK), m_linkToPrevUserPage(""){
    curlSetup();
}


// This is the callback function that will be called by cURL
// when it receives data from the API
size_t Api::writeCallback(char *contents, size_t size, size_t nmemb, void *userp) {
    ((std::string*)userp)->append(contents, size * nmemb);
    return size * nmemb;
}


std::vector<User> Api::get6Users(bool toNextPage){
    CURLcode res;
    std::string response;
    json result;

    if (toNextPage)
        sendRequest(res, response, m_linkToNextUserPage);
    else
        sendRequest(res, response, m_linkToPrevUserPage);

    result = json::parse(response);

    if ( result["links"]["next_url"] == nullptr )
        m_linkToNextUserPage = "";
    else
        m_linkToNextUserPage = result["links"]["next_url"];

    if ( result["links"]["prev_url"] == nullptr )
        m_linkToPrevUserPage = "";
    else
        m_linkToPrevUserPage = result["links"]["prev_url"];

    return parseGetUsersResponse(result);
}


Api::~Api() {
    // Clean up cURL
    curl_easy_cleanup(m_curl);
}

void Api::sendForm(CURLcode &res, std::string &response, const std::string &token, const std::string &photoPath, const std::string &name, const std::string &email, const std::string &phone, const std::string &positionId) const
{
    // Create a new curl_httppost struct to hold the form data
       struct curl_httppost* post = NULL;
       struct curl_httppost* last = NULL;

       // Add the photo file to the form data
       curl_formadd(&post, &last, CURLFORM_COPYNAME, "photo", CURLFORM_FILE, photoPath.c_str(), CURLFORM_END);

       // Add the name field to the form data
       curl_formadd(&post, &last, CURLFORM_COPYNAME, "name", CURLFORM_COPYCONTENTS, name.c_str(), CURLFORM_END);

       // Add the email field to the form data
       curl_formadd(&post, &last, CURLFORM_COPYNAME, "email", CURLFORM_COPYCONTENTS, email.c_str(), CURLFORM_END);

       // Add the phone field to the form data
       curl_formadd(&post, &last, CURLFORM_COPYNAME, "phone", CURLFORM_COPYCONTENTS, phone.c_str(), CURLFORM_END);

       // Add the position_id field to the form data
       curl_formadd(&post, &last, CURLFORM_COPYNAME, "position_id", CURLFORM_COPYCONTENTS, positionId.c_str(), CURLFORM_END);

       // Set the URL of the REST API endpoint
       curl_easy_setopt(m_curl, CURLOPT_URL, FORM_LINK);

       // Set the form data for the request
       curl_easy_setopt(m_curl, CURLOPT_HTTPPOST, post);

       // Add the token to the request header
       struct curl_slist* headers = NULL;
       std::string authorizationHeader = "Token: " + token ;
       headers = curl_slist_append(headers, authorizationHeader.c_str());
       curl_easy_setopt(m_curl, CURLOPT_HTTPHEADER, headers);

       // Set the callback function for the response data
       curl_easy_setopt(m_curl, CURLOPT_WRITEFUNCTION, writeCallback);

       // Set the userdata parameter for the callback function
       curl_easy_setopt(m_curl, CURLOPT_WRITEDATA, &response);

       // Perform the HTTP POST request
       res = curl_easy_perform(m_curl);

       // Clean up the form data and headers
       curl_formfree(post);
       curl_slist_free_all(headers);

       // Check for errors
       if (res != CURLE_OK) {
           std::cerr << "Error: " << curl_easy_strerror(res) << std::endl;
       }
}

void Api::sendRequest(CURLcode& res, std::string& response, const std::string& requestLink) {
    curlSetup();
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

std::string Api::getToken()  {
    CURLcode res;
    std::string response;
    json result;

    sendRequest(res, response, TOKEN_LINK);

    // Print the API response
    result = json::parse(response);

    return result["token"];

}

bool Api::isThereNextPage() const
{
    return m_linkToNextUserPage != "";
}

bool Api::isTherePrevPage() const
{
    return m_linkToPrevUserPage != "";
}

void Api::resetAPI()
{
    m_linkToNextUserPage = FIRST_6_USERS_LINK;
    m_linkToPrevUserPage = "";
}

std::vector<std::string> Api::getPositions() {
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

std::vector<User> Api::parseGetUsersResponse(const json &j) const {
    std::vector<User> result;
    for (auto& user : j["users"])
    {
        result.push_back(UserBuilder()
                          .setName(user["name"])
                          .setEmail(user["email"])
                          .setPosition(user["position"])
                          .setPhoneNumber(user["phone"])
                          .build());
    }
    return result;

}

void Api::curlSetup()
{
    m_curl = curl_easy_init();
    if (!m_curl) {
        std::cerr << "Error: Curl failed to initialize" << std::endl;
        exit(1);
    }

    curl_easy_setopt(m_curl, CURLOPT_WRITEFUNCTION, Api::writeCallback);
}

