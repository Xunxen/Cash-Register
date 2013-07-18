#ifndef ORDER_H
#define ORDER_H
#include"item.h"
#include"dllist.h"

const double TAXRATE=0.06;

class order{
dllist<item> items;
double tax, subtotal, taxable, nontaxable, total;

public:
order();
void next();
void prev();

void addItem(item&);
void addItem(item);
void removeItem();

double getTax();
double getSubtotal();
double getTaxable();
double getNontaxable();
double getTotal();
int getQuantity();
std::string getLine();
bool isEnd();

};

#include"order.cpp"
#endif
