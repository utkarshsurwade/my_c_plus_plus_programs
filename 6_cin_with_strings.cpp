#include <iostream>

using namespace std;

int main()
{

    string full_name;

    cout << "enter your full name:" << endl;

    getline(cin,full_name);//we use special function called getline
    /*which allows users to enter the full name i.e accept the whole stream(spacebar is ignored)
      getline function takes two arguments.....cin as the means of input for our program and the variable in which we are going
      to store our value (in this case full_name)
        Basically what this function is saying is that get the whole line up untill the user hits enter from console(keyboard)
        and store its value in full_name */

    cout <<"your fullname is:"<<full_name;

    return 0;
}
