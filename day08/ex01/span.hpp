#include <iostream>
#include <vector>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> my_vector;
    public:
        Span();
        Span(unsigned int n);

        Span(const Span& copy);
        Span & operator=(const Span &obj);

        ~Span();
        class TheContainerIsFull : public std::exception
        {
        public:
            virtual const char* what() const throw()
            {
                return ("TheContainerIsFull");
            }
        };

        class ThereisNoSpanToFind : public std::exception
        {
        public:
            virtual const char* what() const throw()
            {
                return ("ThereisNoSpanToFind");
            }
        };

        void addNumber(int i);
        void addNumber(int n, unsigned int count);
        int  shortestSpan();
        int  longestSpan();
};