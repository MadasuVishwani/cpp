//Arguments passed but no return value
# include <iostream>
using namespace std;

void prime(int n);

int main()
{

    int num;
    cout << "Enter a positive integer enter to check: ";
    cin >> num;
    prime(num);
    return 0;
}
void prime(int n)
{
    int i, flag = 0;
    
    if(n==1)
    {
        cout<<n<<" is a composite number";
    }
    else
    {
        for(i = 2; i <= n/2; ++i)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
        {
            cout<<n<<" is not a prime number";
        }
        else{
            cout<<n<<"  is a prime number";
        }
        
        
    }       
        
}