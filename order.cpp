order::order(){

    tax=subtotal=taxable=nontaxable=0;

}

void order::next(){

    items.nextNode();

}

void order::prev(){

    items.prevNode();

}

void order::addItem(item i){

    items.pushBack(i);
    if(i.getTax()){

        taxable+=i.getPrice();
        tax=taxable*TAXRATE;

    }
    else nontaxable+=i.getPrice();

    subtotal=nontaxable+taxable;
    total=subtotal+tax;

}

void order::addItem(item& i){

    items.pushBack(i);
    if(i.getTax()){

        taxable+=i.getPrice();
        tax=taxable*TAXRATE;

    }
    else nontaxable+=i.getPrice();

    subtotal=nontaxable+taxable;
    total=subtotal+tax;

}

void order::removeItem(){

    items.pushBack(-items.getData());

}

double order::getTax(){

    return tax;

}

double order::getSubtotal(){

    return subtotal;

}

double order::getTaxable(){

    return taxable;

}

double order::getNontaxable(){

    return nontaxable;

}

double order::getTotal(){

    return total;

}

int order::getQuantity(){

    return items.getSize();

}

std::string order::getLine(){

    return items.getData().toString();

}

bool order::isEnd(){

    return items.isEnd();

}
