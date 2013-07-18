cost::cost(){



}

cost::cost(double nontaxable,double taxable){

    this->nontaxable=nontaxable;
    this->taxable=taxable;
    tax=taxable*TAXRATE;
    subtotal=nontaxable+taxable;
    total=subtotal+tax;

}


double cost::getSubtotal(){

    return subtotal;

}

double cost::getTaxable(){

    return taxable;

}

double cost::getNontaxable(){

    return nontaxable;

}

double cost::getTax(){

    return tax;

}

double cost::getTotal(){

    return total;

}

