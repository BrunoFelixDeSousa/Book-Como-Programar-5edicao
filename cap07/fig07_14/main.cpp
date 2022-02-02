#include "gradebook.h"

using namespace std;

int main()
{
    int gradesArray[] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

    GradeBook myGradeBook("CS101 Introducao a programacao C++", gradesArray);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();

    system("pause");
    return 0;
}

