#include "Phonebook.hpp"
#include "Contact.hpp"

void    PhoneBook::info_about_contact(int i)
{
    std::cout<<"First name: "<<contact[i - 1].getFirst_name()<<std::endl;
    std::cout<<"Last name: "<<contact[i - 1].getLast_name()<<std::endl;
    std::cout<<"Nickname: "<<contact[i - 1].getNickname()<<std::endl;
    std::cout<<"Phone number: "<<contact[i - 1].getPhone_number()<<std::endl;
    std::cout<<"Darkest secret: "<<contact[i - 1].getDarkest_secret()<<std::endl;
}

std::string PhoneBook::new_str(int j, int f)
{
    std::string str;

    if (f == 1)
        str = contact[j].getFirst_name();
    if (f == 2)
        str = contact[j].getLast_name();
    if (f == 3)
        str = contact[j].getNickname();
    if (str.length() > 10)
    {  
        str.resize(9);
        str.append(1, '.');
    }
    return (str);
}

void    PhoneBook::search(int i)
{
    int         j;
    std::string s;
    int         num;
    std::string str;

    j = 0;
    std::cout<<"     Index|First name| Last name|  nickname|"<<std::endl;
    while (j < i)
    {
        std::cout<<std::setw(10)<<j + 1<<"|";
        str = new_str(j, 1);
        std::cout<<std::setw(10)<<str<<"|";
        str = new_str(j, 2);
        std::cout<<std::setw(10)<<str<<"|";
        str = new_str(j, 3);
        std::cout<<std::setw(10)<<str<<"|";
        std::cout<<std::endl;
        j++;
    }
    std::cout<<"\x1b[32mEnter index of contact for getting information\x1b[0m"<<std::endl;
    std::getline(std::cin, s);
    if (s.length() == 1)
    {
        if (isdigit(s[0]))
        {
            num = std::stoi(s);
            if (num <= i && num != 0)
                info_about_contact(num);
        }
    }
}

void    PhoneBook::add_contact(int i)
{
    std::string str;

    std::cout<<"\x1b[32mGive me some information\x1b[0m"<<std::endl;
    std::cout<<"Enter first name: ";
    std::getline(std::cin, str);
    contact[i].setFirst_name(str);
    std::cout<<"Enter last name: ";
    std::getline(std::cin, str);
    contact[i].setLast_name(str);
    std::cout<<"Enter nickname: ";
    std::getline(std::cin, str);
    contact[i].setNickname(str);
    std::cout<<"Enter phone number: ";
    std::getline(std::cin, str);
    contact[i].setPhonenumber(str);
    std::cout<<"Enter darkest secret: ";
    std::getline(std::cin, str);
    contact[i].setDarkestsecret(str);
}