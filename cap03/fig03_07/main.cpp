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
    GradeBook( string name )
    {
        setCourseName( name );
    }

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
    GradeBook gradeBook1( "C++ Programming!" );
    GradeBook gradeBook2( "Data structures in C++!" );

    cout << "GradeBook1 criado para " << gradeBook1.getCourseName()
    << "\nGradeBook2 criado para " << gradeBook2.getCourseName();

    return 0;
}
