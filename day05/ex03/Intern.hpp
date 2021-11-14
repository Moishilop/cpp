//
// Created by Diedre Zoom on 9/11/21.
//

#ifndef DAY05_INTERN_HPP
#define DAY05_INTERN_HPP
#include <iostream>
#include "Form.hpp"


class Intern {

private:
    Form *action[3];
public:
    Intern();
    virtual ~Intern();

    Intern(const Intern &copy);
    Intern &operator=(const Intern &obj);
    class NoOverlapping: public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("NoOverlapping");
        }
    };

    Form *makeForm(const std::string &s1, const std::string &s2);
};


#endif //DAY05_INTERN_HPP
