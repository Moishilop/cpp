//
// Created by Diedre Zoom on 9/9/21.
//

#ifndef DAY05_ROBOTOMYREQUESTFORM_HPP
#define DAY05_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
    static int success;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string name);

    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

    virtual ~RobotomyRequestForm();
    virtual void execute(Bureaucrat const & executor) const;

    const std::string &getTarget() const;

};


#endif //DAY05_ROBOTOMYREQUESTFORM_HPP
