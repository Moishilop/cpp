#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    f_name = filename + ".replace";
	this->s1 = s1;
	this->s2 = s2;
	std::cout << "Constructor of class Replace was called" << std::endl;
}

Replace::~Replace()
{
    std::cout << "Destructor of class Replace was called" << std::endl;
}

std::string Replace::getFilename(void)
{
    return (f_name);
}

std::string Replace::getStr1(void)
{
    return (s1);
}

std::string Replace::getStr2(void)
{
    return (s2);
}