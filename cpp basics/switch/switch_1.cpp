//program to calculate basic calculator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char op; 
    float a,b;
    cout<<"Enter an operator (+ , - , * , / ) ";
    cin>>op;
    cout<<"Enter two numbers a and b ";
    cin>>a>>b;
    switch (op){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;
        default:
            cout<<"eror!";
            break;
    }

}