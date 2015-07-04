//wap to display "hello world" ten times using while loop

#include <iostream>

using namespace std;

int main()
{
    int count = 1;//initialize the loop control variable outside the the while statement
    while (count <= 10)//relational expression[further count in this case is called loop control variable]

    {

    cout<<count<< ": ";//statement to make the program more neat
    cout << "Hello world!\n" << endl;//body or statement that does some type of work


    ++/*increment(keep on incrementing "count" until its equal to 10)*/count;//some statement(maybe increment "++" or decrement "--")that modifies the loop control variable so that makes the relational expression becomes false.
    }
    return 0;

}
