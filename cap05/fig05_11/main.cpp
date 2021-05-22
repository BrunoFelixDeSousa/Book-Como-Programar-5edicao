#include "GradeBook.h"

int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming" );
    //myGradeBook.displayMessage();
    //myGradeBook.determineClassAvarege();
    myGradeBook.inputGrade();
    myGradeBook.displayGradeReport();
    return 0;
}
