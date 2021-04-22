#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    double numbers[6];
    cout<<"Enter 6 numbers ";
    for(int i=0;i<6;i++)
    {
        cin>>numbers[i];
    }

    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are: ";
    for (int i=0;i<6;i++) {
        int result;
        result=numbers[i];
        cout<<result<<" ";
        sum+=numbers[i];
        ++count;
    }
    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}