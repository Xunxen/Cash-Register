#ifndef COST_H
#define COST_H

class cost{

    double subtotal,taxable,nontaxable,tax,total;

public:
    cost();
    cost(double,double);

    double getSubtotal();
    double getTaxable();
    double getNontaxable();
    double getTax();
    double getTotal();
    friend class payment;
    
};

#include"cost.cpp"
#endif
