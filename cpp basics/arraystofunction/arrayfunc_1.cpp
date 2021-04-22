#include <bits/stdc++.h>
using namespace std;
void display(int m[])
{
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<" marks: "<<m[i]<<endl;
    }

}
int main()
{
    int marks[5]={55,33,99,86,28};
    display(marks);
    return 0;           
}