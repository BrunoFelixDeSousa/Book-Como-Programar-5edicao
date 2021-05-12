#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h";

int main()
{
    GradeBook gradeBook1( "C++ Programming!" );
    GradeBook gradeBook2( "Data structures in C++!" );

    cout << "GradeBook1 criado para " << gradeBook1.getCourseName()
    << "\nGradeBook2 criado para " << gradeBook2.getCourseName();

    return 0;
}
