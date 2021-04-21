// Function prototype
// Declaring a function after function call

#include <bits/stdc++.h>
using namespace std;

int multiply(int ,int);

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    int ans=multiply(num1,num2);
    cout<<ans;
}

int multiply(int n1,int n2)
{
    return(n1*n2);
}