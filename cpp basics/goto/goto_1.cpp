# include <iostream>
using namespace std;

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0)
        {
            goto avg;
        } 
        sum += num;
    }
    
avg:
    average = sum / n;
    cout << "\nAverage = " << average;
    return 0;
}