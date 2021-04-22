#include<iostream>
using namespace std;

void print(int a)
{
    cout<<"Here integer is "<<a<<endl;
}
void print(double b)
{
    cout<<"Here floating number is "<<b<<"\n";
}
void print(char const *c)
{
    cout<<"Here character is "<<c;
}

int main()
{
    print(7);
    print(7.7);
    print("seven");
}