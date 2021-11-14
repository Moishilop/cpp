#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
    	Contact contact[8];
	public:
		void add_contact(int i);
    	void info_about_contact(int i);
    	void search(int i);
    	std::string new_str(int j, int f);
};

#endif