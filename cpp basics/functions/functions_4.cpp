// function with parameter
#include <bits/stdc++.h>
using namespace std;

void number(int n1, float n2){
    cout<<"The int number is "<<n1<<"\n";
    cout<<"The float number is "<<n2;
}
int main(){
    int num1;
    float num2;
    cout<<"num1= "; cin>>num1;
    cout<<"num2= "; cin>>num2;
    number(num1,num2);
    return 0;
}