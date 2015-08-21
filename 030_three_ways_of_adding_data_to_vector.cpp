#include <iostream>
#include<vector>
using namespace std;

int main()
{
   vector<string>names;
   //common way of adding data to vector is by using push_back method
    names.push_back("david");//when we use push_back method we add data in the vector in the first available spot (here position 0)
    names.push_back("mason");//the next push_back will put the data in second available spot (here position 1)
    names.push_back("mcnugget");//the next push_back will put the data in the next available spot (here position 2)*/
    cout<<"the first name is :"<<names[0]<<endl;
    cout<<"the second name is :"<<names[1]<<endl;
    cout<<"the third name is :"<<names[2]<<endl<<endl;

    vector<string>names1(3)/*three values can be stored in this vector on position 0,1,2*/;
  //another way of adding data to a vector is by direct assignment by specifying a subscript or position
    names1[0]="jason";
    names1[1]="flurry";
    names1[2]="phurry";
   cout<<"the first name is :"<<names1[0]<<endl;
   cout<<"the second name is :"<<names1[1]<<endl;
   cout<<"the third name is :"<<names1[2]<<endl;

    vector<int> numbers(10,0);//the third way to add data into a vector is to add default data when we declare a vector
                            //here we are declaring a int vector called numbers in which ten values are stored and each value is "0"



    return 0;
}
