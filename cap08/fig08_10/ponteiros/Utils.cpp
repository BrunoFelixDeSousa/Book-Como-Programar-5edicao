#include "Utils.h"

#include <iostream>

#include <cctype>
using std::islower;
using std::toupper;

namespace Utils {

    void convertToUppercase( char *sPtr )
    {
        while( *sPtr != '\0' )
        {
            if ( islower( *sPtr ) )
                *sPtr = toupper( *sPtr );
            *sPtr++;
        }
    }

    void printCharacters( const char *sPtr )
    {
        for ( ; *sPtr != '\0'; sPtr++ )
            std::cout << *sPtr;
    }

}
