#include <bits/stdc++.h>
using namespace std;
int main(){
    //implicit conversions
    int a=10;
    double b=1.55;
    a=a+b;
    float c=a+2.0; 
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
    //explicit conversions
    double d=1.33;
    int sum = (int)d+1;
    cout<<"sum= "<<sum<<endl;
    
    float f=9.6688;
    int g=(int)f;
    int h=int(f);
    double i=double(f);
    cout<<"f= "<<f<<endl<<"g= "<<g<<endl<<"h= "<<h<<endl<<"i= "<<i<<endl;
}