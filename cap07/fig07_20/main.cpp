#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int arraySize = 10;
    int data[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
    int insert;

    cout << "Matriz nao classificada:" << endl;

    for ( int i = 0; i < arraySize; i++ )
        cout << setw( 4 ) << data[ i ] << " ";


    for ( int next = 1; next < arraySize; next++ )
    {
        insert = data [ next ];

        int moveItem = next;

        while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
        {
            data[ moveItem ] = data[ moveItem - 1 ];
            moveItem--;
        }

        data[ moveItem ] = insert;
    }

    cout << "\n\nmatriz ordenada:" << endl;

    for ( int i = 0; i < arraySize; i++ )
        cout << setw( 4 ) << data[ i ] << " ";
}