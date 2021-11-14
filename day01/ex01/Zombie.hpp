#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
        static int  n;
    
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void define_name( std::string name );
};

#endif