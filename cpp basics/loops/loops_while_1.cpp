//nested if else
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    int i=1;
    while (i<=10){
        int ans;
        ans=number*i;
        cout<<number<<" * "<<i<<" = "<<ans<<endl;
        i++;
    }
    return 0;
}