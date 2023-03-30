//
// Created by kpilavov on 30.03.23.
//

#ifndef ABZ_AGENCY_API_H
#define ABZ_AGENCY_API_H


#include <string>
#include <curl/curl.h>
#include <string>
#include <nlohmann/json.hpp>
#include "User.h"

using json = nlohmann::json;


class Api {
private:
    std::string m_linkToNextUserPage;
    CURL* m_curl;

    static size_t writeCallback(char* contents, size_t size, size_t nmemb, void* userp);
    void sendRequest(CURLcode& res, std::string& response, const std::string& requestLink) const;
    void parseGetUsersResponse(const json& j) const;
    void addClientToUi(const User& user) const;
public:
    Api();
    ~Api();

    void get6Users() ;
    std::vector<std::string> getPositions() const;
    std::string getToken() const;

};


#endif //ABZ_AGENCY_API_H
