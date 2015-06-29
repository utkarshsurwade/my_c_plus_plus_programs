//a function is an individual set of instructions for a single purpose
#include<iostream>

using namespace std;

int squared(int a)//parameter list (contains one,more or none pieces of data)
		  //consists of data type and variablename(parameter)
{
int square;
square = a*a;
return square;//return statement (every value returning function has to have a return statement)
              //since we declared a data type for the function ,therefore its a value returning function
             //(here "square" is a function that returns an int value)
}

int main ()
{
int number,sq;
cout<<"\nplease enter a number :";
cin>>number;
cout<<"the square of the above number is :";
sq = squared(number);//function call contains function name and argument list
                    //a function call argument list has to match the parameter list of the function(i.e the datatype and all parameters should match)
                    //at the function call the body of the function is executed
cout<<sq<<endl;//calling the function as the act of assigning its value to a variable
return 0;
}
