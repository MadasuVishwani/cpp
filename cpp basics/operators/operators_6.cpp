
//bitwise operators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=5,x;//a=0100 b=0101
    x=a&b;
    cout<<"a&b= "<<x<<endl;//0100
    x=a|b;
    cout<<"a|b= "<<x<<endl;//0101   
    x=a^b;
    cout<<"a^b= "<<x<<endl;//performs xor 0001
    x=~a;
    cout<<"~a= "<<x<<endl;//inverts all bits 1011
    x=~b;
    cout<<"~b= "<<x<<endl;//inverts all bits 1010
    x=a<<1;
    cout<<"a<<1= "<< x <<endl;//shifts left by 1 bit 1000
    x=b>>1;
    cout<<"b>>1= "<< x <<endl;//shifts right by 1 bit 0010


    return 0;

}