#include <iostream>

using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook
{
public:
    GradeBook( string name )
    {
        setCourseName( name );
    }

    void setCourseName( string name )
    {
        courseName = name;
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
