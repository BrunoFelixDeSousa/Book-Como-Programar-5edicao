#include <iostream>
#include "Utils.h"

using namespace std;

int main()
{
    char phrase[] = "characters and $32.98";

    cout << "A frese antes de converter: " << phrase << endl;
    Utils::convertToUppercase( phrase );
    cout << "Depois da conversao : " << phrase << endl;

    Utils::printCharacters( phrase );
    return 0;
}
