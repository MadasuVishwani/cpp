//function with no arguments passed and has return value
# include <iostream>
using namespace std;

int prime();

int main()
{
    int num;
    int flag=0;
    num=prime();
    for (int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }

    }
    if(num==1)
    cout<<num<<" is a composite number";
    else if(flag==1)
    cout<<num<<" is a not a prime number";
    else
    cout<<num<<" is a prime number";
    return 0;
}

int prime()
{
    int num;

    cout<<"Enter a positive integer to check: ";
    cin >> num;

    return num;

}