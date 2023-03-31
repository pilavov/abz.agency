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
    std::string m_linkToPrevUserPage;
    CURL* m_curl;

    static size_t writeCallback(char* contents, size_t size, size_t nmemb, void* userp);
    void sendRequest(CURLcode& res, std::string& response, const std::string& requestLink) const;
    std::vector<User> parseGetUsersResponse(const json& j) const;
public:
    Api();
    ~Api();

    void sendForm(CURLcode& res,
                   std::string& response,
                   const std::string& token,
                   const std::string& photoPath,
                   const std::string& name,
                   const std::string& email,
                   const std::string& phone,
                   const std::string& positionId) const ;

    std::vector<User> get6Users(bool toNextPage) ;
    std::vector<std::string> getPositions() const;
    std::string getToken() const;
    bool isThereNextPage() const;
    bool isTherePrevPage() const;
};


#endif //ABZ_AGENCY_API_H
