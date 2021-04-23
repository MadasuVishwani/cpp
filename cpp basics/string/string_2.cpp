//To read the text containing blank space, cin.get function can be used. 
//First argument is the name of the string (address of first element of string) and second argument is the maximum size of the array.
#include <iostream>
using namespace std;

int main()
{
    char str[1];
    cout << "Enter a string: ";
    cin.get(str, 100);

    cout << "You entered: " << str << endl;
    return 0;
}