//
// Created by Diedre Zoom on 9/9/21.
//

#ifndef DAY05_SHRUBBERYCREATIONFORM_HPP
#define DAY05_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{

private:
        std::string target;
public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string name);

        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

        virtual ~ShrubberyCreationForm();
        virtual void execute(Bureaucrat const & executor) const;

        const std::string &getTarget() const;

};


#endif //DAY05_SHRUBBERYCREATIONFORM_HPP
