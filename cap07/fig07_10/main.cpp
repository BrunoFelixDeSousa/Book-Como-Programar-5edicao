// Programa rola um dado de 6 lados 6.000.000 vezes
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    const int arraySize = 7; // ignora o elemento zero
    int frequency[ arraySize ] = { 0 };

    srand( time( 0 ) ); //semeia o gerador de numeros aleatórios

    for ( int roll = 1; roll <= 6000000; roll++)
        frequency[ 1 + rand() % 6 ]++;

    cout << "Face" << setw(13) << "Frequencia" << endl;

    for ( int face = 1; face < arraySize; face++ )
        cout << setw(4) << face << setw(13) << frequency[ face ] << endl;


    return 0;
}