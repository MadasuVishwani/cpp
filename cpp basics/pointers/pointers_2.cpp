#include <iostream>
using namespace std;
int main()
{
    int* var;
    int x;//here try is pointer variable which stores address , x is normal interger
    x=9;
    var = &x;

    cout<<"x= "<<x<<"\n";

    cout<<"address of x= "<<&x<<"\n";
    cout<<"var= "<<var<<"\n";
    cout<<"*var= "<<*var<<"\n";
    //* is used with pointers, it's called the dereference operator.
    // It operates on a pointer and gives the value pointed by the address stored in the pointer
    return 0;
}   