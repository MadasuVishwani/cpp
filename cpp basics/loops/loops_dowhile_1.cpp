
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    int i=1;
    do{
        int ans;
        ans=number*i;
        cout<<number<<" * "<<i<<" = "<<ans<<endl;
        i++;
    }while(i<=10);// test expression even though if it evaluates false but still loop body will execute atleast 1 time
    
    return 0;
}