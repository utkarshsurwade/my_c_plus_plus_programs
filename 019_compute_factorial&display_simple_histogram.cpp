//wap to write factorial of a number
//wap to display
/*
***** 5
*********** 11
******* 6
*/
#include <iostream>

using namespace std;

int main()
{   int num,fact = 1,factorial = 1;
    cout << "enter a number whose factorial you would like to calculate :";
    cin>>num;
    cout<<"\n";
    for (int i = 1  ;i<=num;++i)
    {
        fact *= i;

        cout<<fact<<"\n";

    }
    cout<<"\t\t\t"<<"or\n\n";
    for (int i = num ;i>0;--i)
    {
        factorial *= i;
        cout<<i<<" * ";
    }
    cout<<"0! = "<<factorial<<"\n\n\n";

    int data1,data2,data3;
    cout<<"please enter the data to be displayed :\n";
    cin>>data1>>data2>>data3;
    cout<<endl<<data1<<" : ";
    for(int i = data1;i>0;--i)
        cout<<"*";
        cout<<"\n";

    cout<<data2<<" : ";
    for(int i = 0;i<data2;++i)
        cout<<"*";
        cout<<"\n";

    cout<<data3<<" : ";
    for(int i = 0;i<data3;++i)
        cout<<"*";
        cout<<"\n\n\n";

    return 0;
}

