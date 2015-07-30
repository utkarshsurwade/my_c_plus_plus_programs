//void function does not return a value.
//you use it primarily to perform some set of operations without expecting it to return a value as a result of those operations

#include <iostream>

using namespace std;

void /*void is the substitute for the return data type*/ heading ()//parameter list
{
    cout<<"wazzup";
}

int main()
{
    heading ();//function calling
    cout << endl;//skip a line
    return 0;
}
