#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""), grade_for_sign(0), grade_for_execute(0), sign(false)
{}

Form::Form(std::string s1, int g1, int g2) : name(s1), grade_for_sign(g1), grade_for_execute(g2), sign(false)
{
    if ( this->grade_for_sign < 1 || this->grade_for_execute < 1)
        throw Bureaucrat::GradeTooHighException();
    if ( this->grade_for_sign > 150 || this->grade_for_execute > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &copy) : name(copy.name), grade_for_sign(copy.grade_for_sign), grade_for_execute(copy.grade_for_execute)
{
    this->sign = copy.sign;
    *this = copy;
}

Form &Form::operator=(const Form &obj)
{
    this->sign = obj.sign;
    return (*this);
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() < this->grade_for_sign)
        this->sign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form &obj)
{
    if (obj.getSign())
        os << "the state of the form signed";
    else
        os << "the state of the form unsigned";
    return (os);
}

std::string Form::getName()
{
   return (this->name);
}

int Form::getGrade_for_sign()
{
    return (this->grade_for_sign);
}

int Form::getGrade_for_execute()
{
    return (this->grade_for_execute);
}

bool Form::getSign() const
{
    return (this->sign);
}

Form::~Form()
{}