//for loop is similar to while loop but it differs because in a for loop , it is always a count controlled loop
//you use a for loop when you know exactly how many times you want your set of statements to be executed
#include <iostream>

using namespace std;

int main()
{
    double balance , rate;
    int years;


    cout << "what is the beginning balance:";
    cin >> balance;
    cout << "what is the annual rate(in percent %):";
    cin >> rate;
    cout<<"how many years to calculate?:";
    cin>>years;
    for(int i =1;/*initialization*/i<=years;/*relation expression(in order to test that loop controle variable)*/++i/*loop controle variable modification(increment ++ or decrement --)*/)
    {
        balance += rate/100*balance;//body or statement that does some type of work(take the value of rate (in %) and multiply it into the current value of balance and keep on doing this until the loop stops)
        cout<<"\nIn year number "<<i<<" balance " <<"= "<< balance;//so that the program's output looks neat(in order to verify the loop)[in order to show the steps]
    }
    cout<<"\n\n"<<"After "<< years << " years,your current balance will be "<<balance<<"\n\n";
    return 0;
}
