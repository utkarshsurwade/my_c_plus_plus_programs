//there are two types of while loop ~ 1: count controlled while loop (loop control variable keeps track of output)
//and 2: sentinel control while loop (loop control variable variable does'nt keep track of output instead it looks for a certain value in order to stop the loop)
//wap that accumulates a set of marks and computes the average using sentinel while loop

#include <iostream>

using namespace std;

int main()
{
    int marks,total = 0, no =0;//
    float average;
    cout<<"enter marks :";
    cin>>marks;
    while(marks != -1)//let us assume the sentinel value to be "-1"(here the loop control variable is the sentinel value)[when we enter "marks" = -1 ,the loop breaks]

    {
        total += marks;//body or statement that does some type of work(take the value of marks and add it into the current value of total and keep on doing this until the loop stops i.e in this case we enter the value of marks = -1)

        ++no;//we increment "no" so that we can use it later to find the average outside the loop(here increment does'nt break the loop onlt sentinel value does)

        cout<<"enter marks :";
        cin>>marks;

    }
    average = total / no;
    cout<<"\naverage = "<<average;
    return 0;
}
