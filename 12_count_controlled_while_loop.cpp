//there are two types of while loop ~ 1: count controlled while loop (loop control variable keeps track of output)
//and 2: sentinel control while loop (loop control variable does'nt keep track of output instead it looks for a certain value in order to stop the loop)
//wap using while loop to show multiplication using addition
#include <iostream>
using namespace std;

int main()
{
    int num1 ,num2, no = 1 ,product=0;//"no" is the loop control variable which is initialized outside the while loop

    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;
    cout<<"\n";

    while (no <=num2)//loop control variable "no" which is in the form of a relational statement
    {
        product += num1;//body or statement that does some type of work(take the value of num1 and add it into the current value of product and keep on doing this until the loop stops)

        cout<<num1<<" + "<<no*num1-num1<<"="<<product<<"\n";//so that the program's output looks neat(in order to verify the loop)[in order to show the steps]

        ++no;//increment "no" in order to stop the loop
    }

     cout<<"\n"<<num1<<" * "<<num2<<"="<<product;
    return 0;

}
