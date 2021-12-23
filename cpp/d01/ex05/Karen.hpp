#include <iostream>
#include <string>

class Karen
{
    private :
        typedef void (Karen::*ff)();
        //ff *tab[];
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public :
        void complain( std::string level );
};