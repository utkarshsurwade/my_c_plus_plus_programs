//Three ways to declare and initialize vectors

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> names;//declare and initialize the vector with no storage space initially reserved   [way 1]
    vector<string> names1(10);//declare and initialize the vector with the number of stored spaces reserved    [way 2]
    vector<string> names2(10,"z");//declare and initialize the vector with the number of stored spaces reserved
                                 //and a default value to fit into each space   [way 3]
    cout<<"the first value of names1 is :"<<names1[0]<<endl<<"\t(no value is stored in names1,therefore no value is displayed)"<<endl<<endl;
    cout<<"the eighth value of names1 is :"<<names1[7]<<endl<<"\t(no value is stored in names1,therefore no value is displayed)"<<endl<<endl;
    cout<<"the first value of names2 is :"<<names2[0]<<endl<<endl;
    cout<<"the third value of names2 is :"<<names2[2]<<endl<<endl;
    for(int i=0;i< names2.size();++i)
    cout<<i<<" :"<<names2[i]<<"\n";

    names.push_back("david");//vector names has no reserved space,therefore "david" will be stored in position 0 in the vector
    names.push_back("mason");//"mason" will be stored in position 1 in the vector
    names.push_back("mcnugget");//"mcnugget" will be stored in position 2 in the vector

    cout<<"\n\nthe first value of names is :"<<names[0]<<"\n";
    cout<<"the second value of names is :"<<names[1]<<"\n";
    cout<<"the third value of names is :"<<names[2]<<"\n";





    return 0;
}
