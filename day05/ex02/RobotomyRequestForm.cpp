#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : Form("Robotomy", 72, 45), target(name) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    this->target = obj.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && executor.getGrade() < this->getGrade_for_execute()) {
        std::cout << "make some drilling noises " << std::endl;
        if (RobotomyRequestForm::success % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->getTarget() << " hasn't been robotomized" << std::endl;
        RobotomyRequestForm::success++;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

const std::string &RobotomyRequestForm::getTarget() const {
    return this->target;
}
int RobotomyRequestForm::success = 0;
