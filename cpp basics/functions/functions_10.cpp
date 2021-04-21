//to find maximum number using functions prototype

#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    if (a>b)
    return a;
    else
    return b;
}

int main()
{
    int num1,num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    int ans;
    ans=max(num1,num2);
    cout<<"maximum numbers is "<<ans;
}