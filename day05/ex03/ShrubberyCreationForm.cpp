#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : Form("Shruberry", 145, 137), target(name) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    this->target = obj.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() < this->getGrade_for_execute())
    {
        std::ofstream fout(this->getTarget());
        std::string str;
        if (!fout)
            std::cout << "Sorry, file can not be open for writing" << std::endl;
        str = "              #\n"
              "             ***\n"
              "            *****\n"
              "           *****~~\n"
              "            **~~~\n"
              "           *~~~***\n"
              "          ~~~******\n"
              "         ~~*********\n"
              "        *************\n"
              "         ***********\n"
              "        *************\n"
              "       ***************\n"
              "      *@***************\n"
              "     ***@************@**\n"
              "    *@****************@**\n"
              "      @****************\n"
              "     *******************\n"
              "    *****@***************\n"
              "   ***********************\n"
              "  ********@****************\n"
              " *****************@*********\n"
              "*****************************";
        fout << str << std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

const std::string &ShrubberyCreationForm::getTarget() const {
    return this->target;
}
