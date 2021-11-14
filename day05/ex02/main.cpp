#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat bro("bro", 135);
    Bureaucrat bru("bru", 120);
    Bureaucrat david("david", 150);
    Bureaucrat carl("carl", 1);
    Bureaucrat president("Vova", 40);

    ShrubberyCreationForm tmp("home"); // 145 : sign 137 : execute
    std::cout << tmp << std::endl;
    bru.signForm(tmp);
    std::cout << tmp << std::endl;
    bru.executeForm(tmp);
    std::cout << "--------------" << std::endl;

    ShrubberyCreationForm new_tmp("list"); // 145 : sign 137 : execute
    std::cout << new_tmp << std::endl;
    bro.signForm(new_tmp);
    std::cout << new_tmp << std::endl;
    bro.executeForm(new_tmp);
    std::cout << "--------------" << std::endl;

    ShrubberyCreationForm garden("garden"); // 145 : sign 137 : execute
    david.signForm(garden);
    std::cout << garden << std::endl;
    carl.signForm(garden);
    std::cout << garden << std::endl;
    carl.executeForm(tmp);
    std::cout << "--------------" << std::endl;

    PresidentialPardonForm new_form("new_form"); // 25 : sign 5 : execute
    president.signForm(new_form);
    std::cout << new_form << std::endl;
    president.executeForm(new_form);
    std::cout << "--------------" << std::endl;

    RobotomyRequestForm a("robot"); // 72 : sign 45 : execute
    carl.signForm(a);
    std::cout << a << std::endl;
    carl.executeForm(a);
    RobotomyRequestForm b("robot_b");
    carl.signForm(b);
    std::cout << b << std::endl;
    carl.executeForm(b);
}   