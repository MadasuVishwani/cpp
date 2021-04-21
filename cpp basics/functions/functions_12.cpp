#include<iostream>  
using namespace std;   

void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{  
    int x, y; 
    cout<<"Enter value of x and y ";
    cin>>x>>y; //enter values with space
    swap(&x, &y);  // passing value to function  
    cout<<"Value of x is: "<<x<<endl;  
    cout<<"Value of y is: "<<y<<endl;  
    return 0;   

  
}   