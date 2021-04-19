//nested if else
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    if(number>0){
        
        if(number%2==0){
            cout<<"You have entered a positive number and an even number";

        }
        else{
            cout<<"You have entered a positive number and a odd number";
        }
        

    }
    else if (number<0){
        cout<<"You have entered a negative number";

    }
    else{
        cout<<"You have entered zero";

    }
    return 0;
}