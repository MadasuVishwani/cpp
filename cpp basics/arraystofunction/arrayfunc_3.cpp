//printing 3-dimensional array numbers
#include <bits/stdc++.h>
using namespace std;
void display(int n[2][3][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                cout<<"numbers["<<i<<"]["<<j<<"]["<<k<<"] = "<<n[i][j][k]<<endl; 
            }   
        }
    } 
}
int main()
{
    int numbers[2][3][2];
    cout<<"Enter 12 numbers ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                cin>>numbers[i][j][k]; 
            }   
        }
    }
    display(numbers);
    return 0;
              
}