//overloading using different types of parameter
#include<iostream>
using namespace std;
// function with float type parameter
float print(float a)
{
    if(a<0.0)
        a=-a;
    
    return a;
}
// function with int type parameter
int print(int a)
{
    if(a<0)
        a=-a;
    
    return a;
}
int main(){
    cout<<"value of -6 is "<<print(-6)<<"\n";
    cout<<"value of 6.6 is "<<print(6.6f);
    return 0;
}