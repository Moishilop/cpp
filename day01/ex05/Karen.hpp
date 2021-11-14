#include <iostream>
#include <string>
#include <unistd.h>

class Karen
{
    private:
        void (Karen::*message[4])(void);
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Karen();
        ~Karen();
        void complain( std::string level );
};