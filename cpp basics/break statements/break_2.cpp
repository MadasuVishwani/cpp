//break statements in inner loop
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1;i<=12;i++)
    {

        for(int j=1;j<=10;j++)
        {
            if(i==4 && j==4)
            {
                break;
            }
            cout<<i<<" "<<j<<"\n";
        }
        
    
    }
}