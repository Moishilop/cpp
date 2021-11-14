#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(1)
{}

Bureaucrat::Bureaucrat(std::string n_name, int g_grade) : name(n_name)
{
	grade = g_grade;
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
    this->grade = copy.grade;
}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
