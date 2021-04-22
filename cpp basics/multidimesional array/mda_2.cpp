//printing 3-dimensional array numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[2][3][2]={
        {{2,0},{2,-7},{22,88}},
        {{3,9},{-5,-9},{3,77}}
    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                cout<<"numbers["<<i<<"]["<<j<<"]["<<k<<"] = "<<numbers[i][j][k]<<endl; 
            }   
        }
    }
    return 0;           
}