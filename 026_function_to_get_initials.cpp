//wap to get initials

#include<iostream>

using namespace std;

string getinitials (string startingname,string secondname,string thirdname)
{
    string firstinit,secondinit,thirdinit;
    firstinit = startingname.substr(0,1);//in order to get initials we call a string function from a string variable
                                        //therefore "startingname" is a string variable/parameter
                                        //now we call function "substr" called substring
                                        //substring allows us to pull a part of a string out of a complete string

    secondinit = secondname.substr(0,1);// (0,1) are the arguments to the substring function

    thirdinit = thirdname.substr(0/*beginning position we want to pull from*/,1/*number of characters to be pulled*/);

    return firstinit + secondinit + thirdinit;
}

int main()
{   string firstname ,middlename,lastname;
    cout<<"please enter first name:";
    getline(cin,firstname);//common mistake ~ cin command and getline(cin,[user input]) may not work simultaneously in a single program
                            //therefore use only cin or getline(cin,[user input])

    cout<<"please enter middle name:";
    getline(cin,middlename);

    cout<<"please enter last name:";
    getline(cin,lastname);

    cout<<"\nThere the initials of the person is:";
    cout<<getinitials (firstname,middlename,lastname)<<endl<<endl;
    return 0;
}
