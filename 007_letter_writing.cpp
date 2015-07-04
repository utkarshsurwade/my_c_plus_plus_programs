/*
Dear $name,

Thank you for the $present.I really like it.I can't believe I'm
already $age years old,but it does'nt feel that much different than
being $age - 1.I hope that some time in the next year we can come visit
you in in $city.

Thank you again for the $present.

sincerely,

$yourName
*/

#include <iostream>

using namespace std;

int main()
{
    string name,present,city,yourName;

    int age;

    cout << "enter sender's name:";
    getline(cin,name);
    cout<<"enter the present they bought:";
    getline(cin,present);
    cout<<"enter sender's city:";
    getline(cin,city);
    cout<<"enter your name:";
    getline(cin,yourName);
    cout<<"enter your age:";
    cin>>age;
    cout<<endl<<endl<<"------------------------------------------------------------------------";

    cout<<"\nDear "<<name<<",\n\n"

        <<"Thank you for the "<<present<<".I really like it.I can't believe I'm\n"

        <<"already "<<age<<" years old,but it does'nt feel that much different than\n";

    cout<<"being "<<age - 1 <<".I hope that some time in the next year we can come visit\n"

        <<"you in "<<city<<".\n\n"

        <<"Thank you again for the "<<present<<".\n\n"

        <<"sincerely,\n\n"

        <<yourName;

    return 0;

}
