#include<iostream>
int prime(int n);

using namespace std;

int main()
{
    int n,t;
    cout << "Enter the number of test cases";
    cin >> t;//3
    while(t>0) 
    {
        cout << "Enter a number: ";
        cin >> n;       
        for(int j=0;j<n;j++)
        {
            if(prime(n)==1)
            {
                if(prime(j)==1)
                {
                    int diff = n - j;
                    if(prime(diff)==1)
                    {
                        cout << n << "=" << j << "+" << diff << " ";
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        cout << "\n";
        t--;
    }
    return 0;
}
int prime(int n)
{
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter = counter + 1;
        }
        else
        {
            continue;
        }
    }
    if(counter==2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
