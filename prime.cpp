#include<iostream>
int prime(int n);
using namespace std;

int main()
{
    int x;
    cout << "Enter a number x: ";
    cin >> x;
    prime(x);
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
        cout << "prime";
    }
    else 
    {
        cout << "composite";
    }
    return 0;
}
