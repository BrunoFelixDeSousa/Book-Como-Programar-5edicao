#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed; // assegura que o ponto de fração decimal seja exibido

#include <iomanip> // manipuladores de fluxo parametrizados
using std::setprecision; // configura a precisão da saída numérica

#include "GradeBook.h"

GradeBook::GradeBook( string name )
{
    setCourseName( name );
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 )
        courseName = name;
    else {
        courseName = name.substr( 0, 25 );
        cout << "Name \"" << name << "\' exceeds maximum length (25).\n"
             << "limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for \n" << getCourseName() << endl;
}

void GradeBook::determineClassAvarege()
{
    int total;
    int gradeCounter;
    int grade;
    double average;

    total = 0;
    gradeCounter = 0;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while ( grade != -1 ) {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if ( gradeCounter != 0 ) {
        average = static_cast< double >( total ) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << "Class average is " << setprecision( 2 ) << fixed << average << endl;
    }
    else
        cout << "No grades were entered" << endl;
}

void GradeBook::inputGrade()
{
    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    studentMaximum = maximum( grade1, grade2, grade3 );
}

void GradeBook::displayGradeReport()
{
    cout << "Maximum of grades entered: " << studentMaximum << endl;
}

int GradeBook::maximum( int x, int y, int z )
{
    int maximumValue = x;

    if ( y > maximumValue )
        maximumValue = y;
    if ( z > maximumValue )
        maximumValue = z;

    return maximumValue;

}
