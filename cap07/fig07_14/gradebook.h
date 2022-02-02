#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:
    // constante -- número de alunos que fizeram o teste
    const static int students = 10; // note os dados públicos

    // construtor inicializa o nome do curso e o array de notas
    GradeBook( string, const int []);

    void setCourseName( string );  // função para configurar o nome do curso
    string getCourseName();        // função para recuperar o nome do curso
    void displayMessage();         // exibe uma mensagem de boas-vindas
    void processGrades();          // realiza várias operações nos dados
    int getMinimum();              // localiza a nota mínima para o teste
    int getMaximum();              // localiza a nota máxima para o teste
    double getAverage();           // determina a nota média para o teste
    void outputBarChart();         // gera saída do gráfico de barras de distribuição de notas
    void outputGrades();           // gera a saída do conteúdo do array de notas

private:
   string courseName;              // nome do curso para esse livro de notas
   int grades[ students ];         // array de notas de aluno

};

#endif // GRADEBOOK_H
