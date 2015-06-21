/* create the following graphics using for loop
   Also tabular data organized in rows and columns

*****
*****
*****
*****
*****

*
**
***
****
*****

*****
****
***
**
*

and show tables 1 to 9
*/

#include <iostream>

using namespace std;

int main()
{
  for(int row = 1;row <= 5;++row )//outer for loop
    {
        for (int col = 1;col <=5; ++col ) //inner for loop (a for loop inside a for loop)
        {
            cout<<"*";
        }

    cout<<"\n";
    }

    cout<<"\n";

    for(int row = 1;row <=5;++row)
    {
        for (int col= 1; col <= row;++col)
        {
            cout<<"*";
        }

        cout<<"\n";
    }

    cout<<"\n";

    for (int row =5;row>=1;--row)
    {
        for (int col =1;col <=row;++col )
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<endl;

    for (float row=1;row<=10;++row)
        {
        for(float col=1;col<=9;++col)
        {
            cout<<row<<"*"<<col<<"="<<row*col<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
