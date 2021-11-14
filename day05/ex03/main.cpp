#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern      someRandomIntern;
    Bureaucrat  dave("Dave", 1);
    Form*       rrf;

    try
    {
        rrf = someRandomIntern.makeForm("robotomy_request", "Robot");
        std::cout << *rrf << std::endl;
        dave.signForm(*rrf);
        std::cout << *rrf << std::endl;
        dave.executeForm(*rrf);
        delete rrf;
    }

    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        rrf = someRandomIntern.makeForm("presidential_pardon", "President");
        std::cout << *rrf << std::endl;
        dave.signForm(*rrf);
        std::cout << *rrf << std::endl;
        dave.executeForm(*rrf);
        delete rrf;
    }

    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        rrf = someRandomIntern.makeForm("shrubbery_creation", "Strawberry");
        std::cout << *rrf << std::endl;
        dave.signForm(*rrf);
        std::cout << *rrf << std::endl;
        dave.executeForm(*rrf);
        delete rrf;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}   