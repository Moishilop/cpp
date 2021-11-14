#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : Form("President", 25, 5), target(name) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    this->target = obj.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() < this->getGrade_for_execute())
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw Bureaucrat::GradeTooLowException();
}

const std::string &PresidentialPardonForm::getTarget() const {
    return this->target;
}
