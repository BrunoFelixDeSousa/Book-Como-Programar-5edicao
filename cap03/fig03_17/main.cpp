#include <iostream>
using std::cout;

#include "GradeBook.h"

int main()
{
    GradeBook gradeBook1( "CS101 Introduction to Programming in C++" );
    GradeBook gradeBook2( "Data structures in C++!" );

    cout << "GradeBook1 criado para " << gradeBook1.getCourseName()
    << "\nGradeBook2 criado para " << gradeBook2.getCourseName();

    return 0;
}
