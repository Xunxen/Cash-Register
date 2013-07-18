#ifndef USERS_H
#define USERS_H
#include<fstream>
#include"login.h"
#include"user.h"
#include"dllist.h"

class users{

public:
    
    users(std::string);
    login log(login&);
    void createUser(user);
    void removeUser(user);
    
private:
    dllist<user> logins;
    std::string file;
    

};

#include"users.cpp"
#endif
