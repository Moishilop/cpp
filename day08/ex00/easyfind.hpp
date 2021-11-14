#include <iostream>
#include <iterator>

class NoElemInContainer : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("NoElemInContainer");
        }
};

template<typename T>
int easyfind(T &container, int i)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), i);
    if (it == container.end())
        throw NoElemInContainer();
    int idx = std::distance(container.begin(), it);
    return (idx);
}