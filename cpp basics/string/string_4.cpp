//passing string to a function
#include <iostream>
using namespace std;
//void print(char *);
//void print(string);
void print(char str[])
{
    cout << "Entered char array is: " << str << endl;
}
void print(string s1)
{
    cout << "Entered string is: " << s1 << endl;
}
int main()
{
    string s1;
    char str[100];
    cout<<"Enter a string ";
    getline(cin,s1);
    cout<<"Enter another string ";
    cin.get(str,100);
    print(s1);
    print(str);
    return 0;
}
