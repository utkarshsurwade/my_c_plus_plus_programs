//results controlled loop
//(in a results controlled loop the relational expression is based on some sort result (target) that the user is looking for)
//wap with given interest rate and balance to find the target amount

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

    while(balance<target)//loop controle variable is balance,(target in this case is the result that we are looking for)
    {
        balance+=(rate/100*balance);
        ++years;
        cout<<"In year number "<<years<<" ,your current balance is "<<balance<<"\n";
    }
    cout<<"\n\nTherefore in "<<years<<" years your current balance "<<"("<<balance<<")";
    cout<<" would be equal to or greater then your target\n\n\n";

    return 0;
}
