#ifndef __MYUN2__STRING_HPP__
#define __MYUN2__STRING_HPP__

#include <string>
class String {
private:
	::std::string _str;
public:
	String(){}
	String(const char* s) : _str(s){}
	String(const ::std::string& s) : _str(s){}
};

#endif//__MYUN2__STRING_HPP__
