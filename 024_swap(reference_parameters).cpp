//the process of exchanging values is called swap(here the swap is between two variables)[we have to have a third variable to perform a swap]
//when you have to perform the swapping operation many times,we use a void function

#include <iostream>

using namespace std;

void swap1(int& num1,int &num2)//reference parameters
{//a reference is a direct link to the system memory location that stores the value of the variable
 //[so rather than passing copies,we are passing links to the memory location itself which are called references]
    int temp1 = num2;
    num2=num1;
    num1=temp1;
}

void swap2(int num3,int num4)//passed by value parameters
{//By design when we pass data into a function,what actually gets passes are copies of the the data values that are the parameters(here numerical values in num1 & num2)
    int temp2 = num4;//a literal copy is made in system memory of the value that are being stored in the variable and that is used for the data values that are passed into the function
    num4 =num3;//therefore during the function call the values are not changed because the compiler is still looking at the memory location where the original value is stored
    num3=temp2;//to overcome this problem instead of using "passed by value parameters" we will use "reference parameters"
}

int main()
{
    int number1=12,number2=13;

    cout<<"original values ~\n";
    cout<<"number 1 :"<<number1<<endl;
    cout<<"number 2 :"<<number2<<endl<<endl;

    cout<<"swaping problem in void function with 'passed by value parameters' ~";
    swap2 (number1,number2);
    cout<<"\nnumber 1 :"<<number1<<endl;
    cout<<"number 2 :"<<number2<<endl<<endl;

    cout<<"successful swaping in void function with 'reference parameters' ~";
    swap1 (number1,number2);
    cout<<"\nnumber 1 :"<<number1<<endl;
    cout<<"number 2 :"<<number2<<endl<<endl<<endl;

    return 0;
}
