#include <iostream>

using namespace std;

int linearSearch( const int [], int, int );

int main()
{
    const int arraySize{ 100 };
    int array[ arraySize ];
    int searchKey;

    for ( int i = 0; i < arraySize; i++ )
        array[ i ] = i * 2;

    cout << "Digite a chave de pesquisa de número inteiro: ";
    cin >> searchKey;

    int element = linearSearch( array, searchKey, arraySize );

    if ( element !=  -1 )
        cout << "Encontrado o valor no elemento: " << element << endl;
    else
        cout << "Valor nao encontrado." << endl;
}

int linearSearch( const int array[], int key, int sizeOfArray )
{
    for ( int i = 0; i < sizeOfArray; i++ )
        if ( array[ i ] == key )
            return i;

    return -1;
}