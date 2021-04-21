//to find maximum number using functions

#include <bits/stdc++.h>
using namespace std;

void max(int a ,int b)
{
    if (a>b)
    cout<<"Maximum number is "<<a;
    else
    cout<<"Maximum number is "<<b;
}

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    max(num1,num2);
}