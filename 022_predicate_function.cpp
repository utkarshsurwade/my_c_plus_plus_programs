/*wap to determine whether a number is even or odd and also determine vowels and consonants
a predicate function is a function which returns a boolean value either true or false
we use them to make a determination of some type of object(e.g is it an even number,is it a letter)*/
#include <iostream>
bool iseven(int x)
{
    return ( (x % 2) == 0);//return true or false
}

bool isvowel(char x)//boolean data types only returns true or false values(no cout)
{
    if ( (x == 'a')||(x=='e')||(x=='i')||(x=='o')||(x=='u') )
    return true;
    else
    return false;
}
using namespace std;

int main()
{
    int num;
    char ltr;
    cout << "Enter number to be checked :";
    cin>>num;
    if(iseven(num))//check for true[if true,execute the body of if statement]
        cout<<num<<" is even\n\n";
    else
        cout<<num<<" is odd\n\n";//if boolean function return false then this statement will be executed
    cout<<"Enter letter to be checked :";
    cin>>ltr;
    if (isvowel(ltr))//by putting our "ltr" character in our boolean function(defined above) leading to the function(boolean) calling to check whether its true
        cout<<ltr<<" is a vowel\n\n";//if true,execute the body of if statement
    else
    cout<<ltr<<" is a consonant\n\n";//if boolean function return false then this statement will be executed
    return 0;
}
