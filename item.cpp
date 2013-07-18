//price per item, tax, dept, name, quantity
item::item(double price, bool tax, std::string dept, std::string name,unsigned int quantity=1){

    this->price=price;
    this->tax=tax;
    this->dept=dept;
    this->name=name;
    this->quantity=quantity;
    this->weight=1.0;

}
//price per weight unit, tax, dept, name, weight
item::item(double price, bool tax, std::string dept, std::string name,double weight){

    this->price=price;
    this->tax=tax;
    this->dept=dept;
    this->name=name;
    this->quantity=1;
    this->weight=weight;

}

item::item(){}

//item::item(item& copy){

    //price=copy.tax;
    //tax=copy.tax;
    //dept=copy.dept;
    //name=copy.name;
    //quantity=copy.quantity;
    //weight=copy.weight;

//}

double item::getPrice(){

    return price*quantity*weight;

}

item item::operator-(){

    item inv;
    inv.price=-price;
    inv.weight=weight;
    inv.tax=tax;
    inv.dept=dept;
    inv.name=name;
    inv.quantity=quantity;
    return inv;

}

bool item::getTax(){

    return tax;

}

double item::getWeight(){

    return weight;

}

std::string item::getDept(){

    return dept;

}

std::string item::getName(){

    return name;

}

unsigned int item::getQuantity(){

    return quantity;

}

std::string item::toString(){

    std::stringstream format;
    format.setf(std::ios::fixed,std::ios::floatfield);
    format.precision(2);
    if(tax)
    format << "$" << price*weight*quantity << "\t" << name << "\t\tT\n";
    else
    format << "$" << price*weight*quantity << "\t" << name << "\n";
    std::string out;
    std::getline(format,out);
    return out;

}
