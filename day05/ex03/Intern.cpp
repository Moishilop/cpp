#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}
Intern::~Intern(){
}

Form *Intern::makeForm(const std::string &s1, const std::string &s2) {

    Form *func = NULL;
    std::string str[3] = {"presidential_pardon", "robotomy_request", "shrubbery_creation"};

    (s1.compare(str[0]) == 0) && (func = new PresidentialPardonForm(s2));
    (s1.compare(str[1]) == 0) && (func = new RobotomyRequestForm(s2));
    (s1.compare(str[2]) == 0) && (func = new ShrubberyCreationForm(s2));
    (func == NULL) ? throw NoOverlapping() : std::cout << "Intern creates " << func->getName() << std::endl;
    return (func);
}
