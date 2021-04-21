//program to multiply two numbers using functions
#include <bits/stdc++.h>
using namespace std;

int multiply(int n1,int n2)
{
    return(n1*n2);
}

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    int ans;
    ans=multiply(num1,num2);
    cout<<num1<<" * "<<num2<<" = "<<ans;
    return 0;
}