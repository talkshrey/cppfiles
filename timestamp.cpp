#include<iostream>

using namespace std;

int main()
{
    int hrs, min, sec;
    cout << "Enter time:"<<endl;
    cout << "Hours= ";
    cin >> hrs;
    cout << "Minutes= ";
    cin >> min;
    cout << "Seconds= ";
    cin >> sec;
    cout << "The time is = " << hrs << ":" << min << ":" << sec;
    int time = hrs*3600 + min*60 + sec; 
    cout << "Time in seconds = " << time;
    return 0;
}
