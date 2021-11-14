#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : grade_for_sign(0), grade_for_execute(0), sign(false), name("default")
{}

Form::Form(std::string s1, int g1, int g2) : grade_for_sign(g1), grade_for_execute(g2), sign(false), name(s1)
{
    if ( this->grade_for_sign < 1 || this->grade_for_execute < 1)
        throw Bureaucrat::GradeTooHighException();
    if ( this->grade_for_sign > 150 || this->grade_for_execute > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &copy) : grade_for_sign(copy.grade_for_sign), grade_for_execute(copy.grade_for_execute), name(copy.name)
{
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
        os << "the state of the form " << obj.getName() << " signed";
    else
        os << "the state of the form " << obj.getName() << " unsigned";
    return (os);
}

std::string Form::getName() const
{
   return (this->name);
}

int Form::getGrade_for_sign() const
{
    return (this->grade_for_sign);
}

int Form::getGrade_for_execute() const
{
    return (this->grade_for_execute);
}

bool Form::getSign() const
{
    return (this->sign);
}

Form::~Form()
{}