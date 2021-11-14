#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(0)
{}

Bureaucrat::Bureaucrat(std::string n_name, int g_grade) : name(n_name)
{
	grade = g_grade;
	if (this->grade < 1)
		throw GradeTooHighException();
	if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
    *this = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
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
