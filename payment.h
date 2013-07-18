#ifndef PAYMENT_H
#define PAYMENT_H

class payment{

public:
enum paytype{CASH,CREDIT,DEBIT,FS,EBT,GIFTCARD};

payment();
payment(double,paytype);
cost pay(cost);
private:
paytype type;
double amount;

};

payment::payment(){}

payment::payment(double amount,paytype type){

    this->amount=amount;
    this->type=type;

}

cost payment::pay(cost c){

    cost n=c;
    if(type!=FS){

        n.total-=amount;
        n.subtotal=(n.subtotal-amount)+n.tax;

    }
    else{

        n.tax=0;
        

    }
    return n;

}

#endif
