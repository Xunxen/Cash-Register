#ifndef LOGIN_H
#define LOGIN_H
#include<string>

class login{

    int id,code;
    std::string name;

public:
    login(int, int);
    login(){}
    int getId();
    int getCode();
    std::string getName();
    void setName(std::string);
    bool operator==(const login&);
    bool operator!=(const login&);

};

login::login(int id, int code){

    this->id=id;
    this->code=code;

}

int login::getId(){

    return id;

}

int login::getCode(){

    return code;

}

std::string login::getName(){

    return name;

}

void login::setName(std::string name){

    this->name=name;

}

bool login::operator==(const login &l){

    return (id==l.id&&code==l.code);

}

bool login::operator!=(const login& l){

    return (id!=l.id||code!=l.code);

}

#endif
