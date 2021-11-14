#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    int         i;
	int			count_of_contacts;
    std::string data;

    i = 0;
    while (1)
    {
        std::cout<<"\x1b[33mEnter ADD, SEARCH or EXIT \x1b[0m";
        std::getline(std::cin, data);
		if (feof(stdin))
			break ;
        if (data == "ADD")
        {   
            if (i == 8)
				i = 0;
			phonebook.add_contact(i);
            i++;
			count_of_contacts++;
			if (count_of_contacts > 8)
				count_of_contacts = 8;
        }
        else if (data == "SEARCH")
            phonebook.search(count_of_contacts);
        else if (data == "EXIT")
        {
            std::cout<<"\x1b[34mGoodbye!See you soon\x1b[0m"<<std::endl;
            exit(0);
        }
    }
    return (0);
}