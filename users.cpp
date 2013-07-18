users::users(std::string f=std::string(".ureg")){

    file=f;
    std::ifstream u(f.c_str());
    if(!u.is_open()) throw FileError("Error opening file " + f + ".");
    while(!u.eof()){

        user temp;
        u >> temp.id >> temp.name;
        temp.code=NULL;
        logins.pushBack(temp);

    }
    u.close();

}

login users::log(login& l){

    for(int i=0;i<logins.getSize();i++){

        user u=logins.getData();
        if(u.id==l.getId()&&u.code!=NULL){

            if(l==login(u.id,*(u.code))) l.setName(u.name);
            else l.setName("invalid");
            return l;

        }
        else if(u.id==l.getId()&&u.code==NULL){

            u.code=new int(l.getCode());
            logins.setData(u);
            l.setName(u.name);
            return l;

        }
        else if(logins.isEnd()){

        l.setName("invalid");
        return l;

        }

    }

}

void users::createUser(user u){

//pushback to logins, write new login to file append
    logins.pushBack(u);
    std::ofstream f(file.c_str(),std::ios_base::app);
    if(f.is_open()) f << u.id << u.name << std::endl;
    else throw FileError(std::string("Error opening file ") + file + std::string("."));

}

void users::removeUser(user u){

//delete matching user from logins, write logins to file, overwriting.
    for(int i=0;i<logins.getSize();i++){

        if(logins.getData().id=u.id){

            logins.remove();
            break;

        }

    }
    std::ofstream f(file.c_str(),std::ios_base::out|std::ios_base::trunc);
    if(!f.is_open()) throw FileError("Could not open file " + file + ".");
    for(int i=0;i<logins.getSize();i++){

        f << logins.getData().id << logins.getData().name << std::endl;

    }

} 
