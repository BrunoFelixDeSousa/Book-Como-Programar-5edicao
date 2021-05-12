#include <iostream>

using std::cout;
using std::endl;

class GradeBook
{
public:
    void displayMessage()
    {
        cout << "Bem vindo ao livro de notas!" << endl;
    }
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();

    return 0;
}
