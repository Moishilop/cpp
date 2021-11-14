#include <iostream>
#include <string>

int main(void)
{
    std::string str;

    str = "HI THIS IS BRAIN";
    std::string &stringREF = str;
    std::string *stringPTR = &str;

    std::cout << "Adress of the str " << &str << std::endl;
    std::cout << "Adress of the str by using REF " << &stringREF << std::endl;
    std::cout << "Adress of the str by using PTR " << stringPTR << std::endl;

    std::cout << "Value of the str " << str << std::endl;
    std::cout << "Value of the str by using PTR " << *stringPTR << std::endl;
    std::cout << "Value of the str by using REF " << stringREF << std::endl;

    return (0);
}