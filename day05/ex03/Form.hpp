#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const int           grade_for_sign;
        const int           grade_for_execute;
        bool                sign;
        const std::string   name;
    public:
        Form();
        Form(std::string s1, int g1, int g2);
        virtual ~Form();

        Form(const Form &copy);
        Form &operator=(const Form &obj);

        std::string getName() const;
        int getGrade_for_sign() const;
        int getGrade_for_execute() const;
        bool getSign() const;

    void beSigned(Bureaucrat &obj);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form &obj);

#endif