//Arguments passed and a return value
# include <iostream>
using namespace std;

int prime(int n);

int main()
{
    int num;
    int flag=0;
    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    flag=prime(num);
    if(num==1)
    cout<<num<<" is a composite number";
    else if(flag==1)
    cout<<num<<" is a not a prime number";
    else
    cout<<num<<" is a prime number";
}
int prime(int n)
{
    for (int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 1;
        }

    }
    return 0;
}
