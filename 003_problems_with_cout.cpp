//problem with cout is that the data will be displayed in a rounded off fashion in which it allows 6 digit precision

#include <iostream>
#include <iomanip>//to over come this problem we use iomanip library

using namespace std;

int main()
{
    double month1,month2,month3,month4;
    month1 = 1061.2363;
    month2 =1073.47;
    month3 =1071.6378;
    month4 =1069.736;

    cout<<setprecision(8);//change the precision in which our output is being displayed in

    cout<<"month\treading\n\n";
    cout<<"1\t"<<month1<<endl;
    cout<<"2\t"<<month2<<"\n";
    cout<<"3\t"<<month3<<endl;
    cout<<"4\t"<<month4<<endl;

    return 0;
}
