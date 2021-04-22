//array declaration: datatype arrayname[arraysize];
#include <bits/stdc++.h>
using namespace std;
int main(){
    int display[6];
    cout<<"Enter 6 numbers ";
    for(int i=0;i<6;i++)
    {
        cin>>display[i];
    }
    cout<<"The numbers are ";
    for (int j=0;j<6;j++)
    {
        cout<<display[j]<<" ";
    }
    return 0;

}