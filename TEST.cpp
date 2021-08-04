#include <iostream>
using namespace std;
int main()
{
    int input ;
    while( cin >> input && input != 42 ) 
    cout << '\t' << input << '\n' ;
    while( cin >> input ) ;
}