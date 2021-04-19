
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    int ans;
    for(int i=1; i<=10; i++){
        ans = number*i;
        cout<<number<<" * "<<i<<" = "<<ans<<endl;
        
    }
    return 0;
}