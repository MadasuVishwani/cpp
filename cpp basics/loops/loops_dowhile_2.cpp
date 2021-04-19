//sum of positive numbers and if negative number is given loop ends


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num=0;
    
    int sum=0;
    do{
        sum+=num;
        cout<<"Enter a number : ";
        cin>>num;

    }while(num>=0);
    cout<<"The sum is "<<sum;
    return 0;
}