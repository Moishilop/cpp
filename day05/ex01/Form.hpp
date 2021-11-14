#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        const int grade_for_sign;
        const int grade_for_execute;
        bool      sign;
    public:
        Form();
        Form(std::string s1, int g1, int g2);
        ~Form();

        Form(const Form &copy);
        Form &operator=(const Form &obj);

        std::string getName();
        int getGrade_for_sign();
        int getGrade_for_execute();
        bool getSign() const;
        void beSigned(Bureaucrat &obj);
};

std::ostream& operator<<(std::ostream& os, const Form &obj);

#endif