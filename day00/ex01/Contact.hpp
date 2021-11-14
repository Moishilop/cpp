#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:

    Contact(){};
	~Contact(){};
	void setFirst_name(std::string f_name)
    {first_name = f_name;}
    void setLast_name(std::string l_name)
    {last_name = l_name;}
    void setNickname(std::string n_name)
    {nickname = n_name;}
    void setPhonenumber(std::string number)
    {phone_number = number;}
    void setDarkestsecret(std::string secret)
    {darkest_secret = secret;}

    std::string getFirst_name(){return first_name;}
    std::string getLast_name(){return last_name;}
    std::string getNickname(){return nickname;}
    std::string getPhone_number(){return phone_number;}
    std::string getDarkest_secret(){return darkest_secret;}
};
#endif