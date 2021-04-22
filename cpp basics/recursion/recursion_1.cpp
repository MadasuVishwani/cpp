#include <bits/stdc++.h>
using namespace std;

int factorial(int);
int main()
{
    int n;
    cout <<"Enter non negative numbers ";
    cin>>n;
    int result=factorial(n);
    cout<<"Factorial of "<<n<<" = "<<result;
    return 0;
}
int factorial(int n)
{
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}