#include "gradebook.h"

#include <iostream>
#include <iomanip>

using namespace std;

// o construtor inicializa courseName e o array grades
GradeBook::GradeBook( string name, const int gradeArrays[] )
{
    setCourseName( name );

    // copia notas de gradeArray para membro de dados grades
    for ( int grade = 0; grade < students; grade++ )
    {
        grades[ grade ] = gradeArrays[ grade ];
    }
}

// função para configurar o nome do curso
void GradeBook::setCourseName( string name )
{
    courseName = name;
}

// função para recuperar o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
}

// exibe uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
    // essa instrução chama getCourseName para obter o
    // nome do curso que esse GradeBook representa
    cout << "Bem-vindo ao livro de notas para: " << getCourseName() << endl;
}

// realiza várias operações nos dados
void GradeBook::processGrades()
{
    // gera saída de array de notas
    outputGrades();

    // chama função getAverage para calcular a nota média
    cout << "A media da turma e: " << setprecision( 2 ) << fixed << getAverage() << endl;

    // chama funções getMinimum e getMaximum
    cout << "A nota mais baixa e: " << getMinimum() << "\nA nota mais alta e: " << getMaximum() << endl;

    // chama outputBarChart para imprimir gráfico de distribuição de notas
    outputBarChart();
}

// localiza nota mínima
int GradeBook::getMinimum()
{
    int lowGrade = 100; // supõe que a nota mais baixa é 100

    for ( int grade = 0; grade < students; grade++ )
    {
        if ( grades[ grade ] < lowGrade )
            lowGrade = grades[ grade ];
    }

    return lowGrade;
}

// localiza nota maxima
int GradeBook::getMaximum()
{
    int highGrade = 0; // supõe que a nota mais alta é 0

    for ( int grade = 0; grade < students; grade++ )
    {
        if ( grades[ grade ] > highGrade )
            highGrade = grades[ grade ];
    }

    return highGrade;
}

// determina média para o teste
double GradeBook::getAverage()
{
    int total = 0; // inicializa o total

    // soma notas no array
    for ( int grade = 0; grade < students; grade++ )
        total += grades[ grade ];

     // retorna média de notas
    return static_cast<double>(total) / students;
}

// gera a saída do gráfico de barras exibindo distribuição de notas
void GradeBook::outputBarChart()
{
    cout << "Distribuição de notas: " << endl;

    // armazena freqüência de notas em cada intervalo de 10 notas
    const int frequencySize = 11;
    int frequency [ frequencySize ] = { 0 };

    // para cada nota, incrementa a freqüência apropriada
    for ( int grade = 0; grade < students; grade++ )
        frequency[ grades[ grade ] / 10 ]++;

    // para cada freqüência de nota, imprime barra no gráfico
    for ( int count = 0; count < frequencySize; count++ )
    {
        // gera a saída do rótulo das barras (“0-9:”, ..., “90-99:”, “100:” )
        if ( count == 0 )
            cout << " 0-9: ";
        else if ( count == 10 )
            cout << "  100: ";
        else
            cout << count * 10 << "-" << ( count * 10) + 9 << ": ";

        // imprime a barra de asteriscos
        for ( int stars = 0; stars < frequency[ count ]; stars++ )
            cout << "*";

        cout << endl;
    }
}

// gera a saída do conteúdo do array de notas
void GradeBook::outputGrades()
{
    cout << "As notas sao:\n\n";

    // gera a saída da nota de cada aluno
    for ( int student = 0; student < students; student++ )
        cout << "Estudante " << setw( 2 ) << student + 1 << ": " << setw( 3 ) << grades[ student ] << endl;
}













