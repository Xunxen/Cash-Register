#ifndef ERRORS_H
#define ERRORS_H
#include<string>
class OutOfBoundsError{
	
	std::string msg;
public:
	OutOfBoundsError(std::string msg){
		
		this->msg=msg;
		
	}
	
	std::string getMsg(){
		
		return msg;
		
	}
	
};

class UndefinedValue{
	
	std::string msg;
public:
	UndefinedValue(std::string msg){
		
		this->msg=msg;
		
	}
	
	std::string getMsg(){
		
		return msg;
		
	}
	
};

class FileError{
	
	std::string msg;
public:
	FileError(std::string msg){
		
		this->msg=msg;
		
	}
	
	std::string getMsg(){
		
		return msg;
		
	}
	
};

#endif
