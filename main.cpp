#include <iostream>
#include "Api.h"
#include "UserBuilder.h"


int main() {
    Api obj;
    obj.get6Users();
//    std::cout << std::setw(4) << obj.get6Users() << std::endl;
//    std::cout << std::setw(4) << obj.get6Users() << std::endl;
//    std::cout << std::setw(4) << obj.get6Users() << std::endl;

    User user2 = UserBuilder()
            .setName("Jane Doe")
            .setEmail("janedoe@example.com")
            .setPosition("Project Manager")
            .setPhoneNumber("555-555-5555")
            .build();

    std::cout << user2.getPhoneNumber();

    return 0;
}
