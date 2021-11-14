#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int	              grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string n_name, int g_grade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat &obj);
		virtual ~Bureaucrat();

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
		std::string getName() const;
		int getGrade() const;
        const Bureaucrat & toPrint() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj);