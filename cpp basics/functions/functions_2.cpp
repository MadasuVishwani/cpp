//calling function
#include <bits/stdc++.h>
using namespace std;

void even(){
    cout<<"The number you have entered is a even number";
}
int main(){
    int n; cout<<"Enter a number "; cin>>n;
    if(n%2==0){
        even();
    }
    else{
        cout<<"The number you have entered is a odd number";

    }
}