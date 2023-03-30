//
// Created by kpilavov on 30.03.23.
//

#ifndef ABZ_AGENCY_USERBUILDER_H
#define ABZ_AGENCY_USERBUILDER_H


#include "User.h"

class UserBuilder {
private:
    User user;
public:
    UserBuilder() {}
    UserBuilder& setName(const std::string& name);
    UserBuilder& setEmail(const std::string&  email);
    UserBuilder& setPosition(const std::string&  position);
    UserBuilder& setPhoneNumber(const std::string&  phoneNumber);
    User build();
};



#endif //ABZ_AGENCY_USERBUILDER_H
