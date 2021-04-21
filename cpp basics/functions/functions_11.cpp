// Function prototype
// Declaring a function after function call

#include <bits/stdc++.h>
using namespace std;

int max(int ,int);

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    int ans=max(num1,num2);
    cout<<"Maximum number is "<<ans;
}

int max(int n1,int n2)
{
    if (n1>n2)
    return n1;
    else
    return n2;
}