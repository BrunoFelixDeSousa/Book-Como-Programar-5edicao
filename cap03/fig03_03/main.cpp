#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
public:
    void displayMessage(string courseName)
    {
        cout << "Bem vindo ao livro de notas para \n" << courseName << "!" << endl;
    }
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Por favor insira o nome do curso:" << endl;
    getline(cin, nameOfCourse);
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);

    return 0;
}
