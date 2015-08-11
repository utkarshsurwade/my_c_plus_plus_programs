//a vector is a data structure that allows you to store multiple values within a single name
//which is different from a variable which lets us store a single value in one name
//vectors are effective in dealing with a larger group of data
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector/*declaring vector*/<int/*data type(here int) of the values to be stored in the vector*/> grades/*name of the vector*/;
    int grade,total = 0;
    double average;
    for(int i=1;i<=5;++i)
    {
        cout<<"Enter grade :";
        cin>>grade;
        grades.push_back(grade);//push_back method takes the current value and stores it in the first available spot in the vector
         //when we declare a variable like above ,initially its empty.so the first time we call push_back its going to put that value to in position zero.
         //The next push_back will put the value in position 1 and so on and so forth.
    }
    for(int i=0;i<grades.size()/*returns the number of elements in the vector*/;++i)
    {
        total += grades[i];
    }
        average = total / grades.size();
    cout<<"The average is :"<<average;
    return 0;
}
