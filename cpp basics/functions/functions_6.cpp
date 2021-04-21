// Function prototype
// Declaring a function after function call

#include <bits/stdc++.h>
using namespace std;

void multiply(int, int);

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    multiply(num1,num2);
    return 0;
}

void multiply(int a,int b)
{
    cout<< a*b;
}