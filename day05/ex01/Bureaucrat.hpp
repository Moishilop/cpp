#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const  std::string  name;
		int			        grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string n_name, int g_grade);
		~Bureaucrat();

    Bureaucrat(const Bureaucrat &copy);
    const Bureaucrat &operator=(const Bureaucrat &obj);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("GradeTooHighException");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("GradeTooLowException");
        }
    };
    void increment();
    void decrement();
    void signForm(Form &form);
    std::string getName();
    int getGrade();
};

#endif