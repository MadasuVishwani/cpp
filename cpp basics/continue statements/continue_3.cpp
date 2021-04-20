// Program to calculate positive numbers till 100 only; negative number loop terminate; numbers above 100 skip iteration
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num;
    while (num >= 0)
    {
        sum += num;
        cout << "Enter a number: ";
        cin >> num;

        if (num > 100)
        {
            cout << "The number is greater than 100 and won't be calculated." << endl;
            num = 0;
            continue;
        }
    }
    cout << " sum is " << sum << endl;
    return 0;
}