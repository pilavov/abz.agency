#ifndef ABZ_AGENCY_USER_H
#define ABZ_AGENCY_USER_H


#include <string>

class User {
    friend class UserBuilder;
private:
    std::string m_name;
    std::string m_email;
    std::string m_position;
    std::string m_phoneNumber;

public:
    std::string getName() const;
    std::string getEmail() const;
    std::string getPosition() const;
    std::string getPhoneNumber() const;
};



#endif //ABZ_AGENCY_USER_H
