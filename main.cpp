#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

string intToStr( int anInt );

int main()
{
    /*
    Need a vector with 9
    */
    vector <string> board;

    for( int i = 0; i < 9; i++ )
    {
        board.push_back( intToStr(i + 1) );
    }

    string board = "";
    for( int i = 0; i < 9; i++ )
    {
        if( i == 0 )
        {
            board += "     |     |     " +
                     "  X  |  O  |     " +
                     "_____|_____|_____" +
                     "     |     |     " +
        }
        if( (i != 0) && (i % 3 == 0) )
        {
            board +=
        }
        cout << board[i] << " ";

    }

    return 0;
}

string intToStr( int anInt )
{
    string          rtnStr;
    stringstream    temp;
    temp << anInt;
    temp >> rtnStr;
    return rtnStr;
}
