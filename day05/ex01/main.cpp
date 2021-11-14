#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat bro("bro", 140);
    Bureaucrat bru("bru", 20);
    Form       form("list", 25, 25);


    std::cout << form << std::endl;
    bru.signForm(form);
    std::cout << form << std::endl;

    Form       form_new("list_new", 25, 25);

    std::cout << form_new << std::endl;
    bro.signForm(form_new);
    std::cout << form_new << std::endl;

    try
    {
        Form       form_wrong_sign("list", 0, 25);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Form       form_wrong_execute("list", 25, 156);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}   