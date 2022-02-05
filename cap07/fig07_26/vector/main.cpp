#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector< int > & );
void inputVector( vector< int > & );

int main()
{
    vector< int > integer1( 7 );
    vector< int > integer2( 10 );

    cout << "Tamanho do vetor 1 e: " << integer1.size()
    << "\nDepois de inicialzado: " << endl;
    outputVector( integer1 );

    cout << "Tamanho do vetor 2 e: " << integer2.size()
    << "\nDepois de inicialzado: " << endl;
    outputVector( integer2 );

    cout << "Digite 17 inteiros:" << endl;
    inputVector( integer1 );
    inputVector( integer2 );

    cout << "Depois da entrada\n"
         << "inteiro 1" << endl;
    outputVector( integer1 );
    cout << "inteiro 2:" << endl;
    outputVector( integer2 );

    return 0;
}

void outputVector( const vector< int > &array )
{
    size_t i;

    for ( i = 0; i < array.size(); i++ )
    {
        cout << setw( 12 ) <<  array[ i ];

        if ( ( i + 1 ) % 4 == 0 )
            cout << endl;
    }

    if ( i % 4 != 0 )
        cout <<  endl;
}

void inputVector( vector< int > &array )
{
    for ( size_t i = 0; i < array.size(); i++ )
        cin >> array[ i ];
}
