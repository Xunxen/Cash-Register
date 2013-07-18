#ifndef ITEM_H
#define ITEM_H
#include<string>
#include<sstream>
class item{

    double price,weight;
    bool tax;
    std::string dept, name;
    unsigned int quantity;
public:
//price, tax, dept, name, quantity
    item(double, bool, std::string, std::string,
        unsigned int);
//price, tax, dept, name, weight
    item(double, bool, std::string, std::string,
        double);
    //item(item&);
    item();
    item operator-();
    double getPrice();
    bool getTax();
    double getWeight();
    std::string getDept();
    std::string getName();
    unsigned int getQuantity();
    std::string toString();
    
};
#include"item.cpp"
#endif
