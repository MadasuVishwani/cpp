//printing 2-dimensional array numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"numbers["<<i<<"]["<<j<<"] = "<<numbers[i][j]<<endl;    
        }
    }
}