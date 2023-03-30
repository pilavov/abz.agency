//
// Created by kpilavov on 30.03.23.
//

#include "UserBuilder.h"

UserBuilder &UserBuilder::setName(const std::string& name) {
    user.m_name = name;
    return *this;
}

UserBuilder &UserBuilder::setEmail(const std::string& email) {
    user.m_email = email;
    return *this;
}

UserBuilder &UserBuilder::setPosition(const std::string& position) {
    user.m_position = position;
    return *this;
}

UserBuilder &UserBuilder::setPhoneNumber(const std::string& phoneNumber) {
    user.m_phoneNumber = phoneNumber;
    return *this;
}

User UserBuilder::build() {
    return user;
}
