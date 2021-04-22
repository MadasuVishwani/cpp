//Overloading Using Different Number of Parameters
#include<iostream>
using namespace std;

void print(int a, double b)
{
    cout<<"intger: "<<a;
    cout<<" and double: "<<b<<"\n";
}
void print(int c)
{
    cout<<"intger: "<<c<<"\n";
}
void print(double d)
{
    cout<<"double: "<<d<<"\n";
}
int main()
{
    int x=4;double y=4.7;
    print(x);
    print(y);
    print(x,y);
}