//sum of positive numbers and if negative number is given loop ends


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
    while(num>=0){
        sum+=num;
        cout << "Enter a number: ";
        cin >> num;

    }
    cout<<"Sum is "<<sum;
    return 0;
}