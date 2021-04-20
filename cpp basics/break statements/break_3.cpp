//sum of all positive numbers; loop ends if negative number is given
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum=0;
    while(num>0)
    {
        cout<<"Enter a number: ";
        cin>>num; 
        if(num<=0)
        {
            break;
        }
        sum+=num;

    }
    cout<<"Sum of entered numbers are "<<sum;
}