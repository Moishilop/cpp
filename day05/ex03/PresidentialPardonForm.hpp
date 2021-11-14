//
// Created by Diedre Zoom on 9/9/21.
//

#ifndef DAY05_PRESIDENTIALPARDONFORM_HPP
#define DAY05_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
private:
        std::string target;
public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string name);

        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

        virtual ~PresidentialPardonForm();
        virtual void execute(Bureaucrat const & executor) const;

    const std::string &getTarget() const;
};


#endif //DAY05_PRESIDENTIALPARDONFORM_HPP
