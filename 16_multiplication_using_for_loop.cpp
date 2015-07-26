//for loops just provides a more concise way to write count controlled loops
//wap to multiply two numbers by addition using for loop
#include <iostream>

using namespace std;

int main()
{
    int num1,num2,product = 0;
    cout << "enter first number :";
    cin>>num1;
    cout<<"enter second number :";
    cin>>num2;
    for (int i=1;i<=num2;++i)
    {
        product +=num1;
        cout<<"\n"<<num1<<"*"<<i<<"="<<product;
    }
    cout<<"\n\nTherefore the product of "<<num1<<" * "<<num2<<" ="<<product<<"\n\n";
    return 0;
}
