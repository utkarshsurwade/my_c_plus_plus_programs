#include <iostream>

using namespace std;

int main()
{
    int years,target;
    double balance , rate;
    cout<<"please enter the current balance:";
    cin>>balance;
    cout<<"please enter the annual rate of interest(in percent %):";
    cin>>rate;
    cout<<"please enter the target balance:";
    cin>>target;

    while(balance<target)
    {
        balance+=(rate/100*balance);
        ++years;
        cout<<"In number "<<years<<" ,your current balance is "<<balance<<"\n";
    }
    cout<<"\n\nTherefore in "<<years<<" years your current balance "<<"("<<balance<<")"<<" would be equal to your"<<target;

    return 0;
}
