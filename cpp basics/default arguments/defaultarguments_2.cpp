#include<iostream>
using namespace std;

void display(char a='#', int b=5)
{
    for(int i=1; i<=b; i++)
    {
        cout<<a;   
    }
    cout<<endl;
}
int main()
{
    int b=9;
    cout<<"No arguments passed ";
    display();
    cout<<"First argument passed ";
    display('*');
    cout<<"Two arguments passed ";
    display('@',b);
    return 0;
}
