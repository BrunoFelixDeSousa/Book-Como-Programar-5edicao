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
    void setCourseName( string course )
    {
        courseName = course;
    }

    string getCourseName()
    {
        return courseName;
    }

    void displayMessage()
    {
        cout << "Bem vindo ao livro de notas para \n" << getCourseName() << "!" << endl;
    }
private:
    string courseName;
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "o nome inicial do curso é: " << myGradeBook.getCourseName() << endl;

    cout << "Por favor insira o nome do curso: " << endl;
    getline(cin, nameOfCourse);

    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;

    myGradeBook.displayMessage();

    return 0;
}
