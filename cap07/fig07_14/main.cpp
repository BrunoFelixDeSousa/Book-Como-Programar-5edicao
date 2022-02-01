#include <iostream>
#include <iomanip>

using namespace std;

void modifyArray( int [], int );
void modifyElement( int );

int main()
{
    const int arraySize = 5;
    int a[ arraySize ] = { 0, 1, 2, 3, 4 };

    cout << "Efeitos de passar array inteiro por referência:"
    <<  "\n\nOs valores do array original são:\n";

    for ( int i = 0; i < arraySize; i++ )
        cout << setw(3) << a[ i ];
    
    cout << endl;

    modifyArray( a, arraySize);

    cout << "Os valores do array modificado são:\n";
    for ( int i = 0; i < arraySize; i++ )
        cout << setw(3) << a[ i ];

    cout << "\n\n\nEfeitos de passar elemento de array por valor:"
        << "\n\n[3] antes de modifyElement: " << a[ 3 ] << endl;

    modifyElement( a[ 3 ] );
    cout << "a[3] depois de modifyElement: " << a[ 3 ] << endl;

    return 0;
}

void modifyArray( int b[], int sizeOfArray )
{
    for ( int k = 0; k < sizeOfArray; k++ )
        b[ k ] *= 2;
}

void modifyElement( int e )
{
    cout << "Valor do elemento no modifyElement: " << ( e *= 2) << endl;
}