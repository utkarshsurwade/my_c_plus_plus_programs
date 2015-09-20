//there are three ways of accessing data in a vector
//the main reason to use vector is because we wanted to group many items(data) into the vector
//we need a simplified method for accessing the items (data) and thats where the for loop comes in
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> grades;
    int total,grade;
    for (int i=1;i<=5;++i)
    {
        cout<<"enter grades :";
        cin>>grade;
        grades.push_back(grade);
    }
    total = grades[0] + grades[1] + grades[2]+ grades[3]+ grades[4];//direct way of accessing data in a vector
    //(this is also a [non-suggestive]standard way but not generally used when there is a larger data set)
    cout<<"\ntotal (using direct way of accessing data in a vector) is :"<<total<<endl;
    total = 0;//setting total back to zero

    for (int i =0;i < grades.size();++i)
    {
        total += grades[i];//when working with a larger data set we need to use a loop
        //looping to a vector is a (suggestive)standard way of to accessing data in a vector

    }
    cout<<"total (using looping method of accessing data in a vector) is :"<<total<<endl<<endl;





    vector<string> names;//pop_back method is the destructive way of accessing the data

    names.push_back("raymond");//push_back places an item[data]onto a vector(here string "raymond" is placed in the vector)
    names.push_back("jason");
    names.push_back("duraldo");
    names.push_back("jeremy");

    for (int i = 0;i<names.size();++i)
    {
        cout<<names[i]<<" ";
    }
    cout<<endl;
    names.pop_back();//pop_back method is the destructive way of accessing the data
    for (int i = 0;i<names.size();++i)
    {
    cout<<names[i]<<" ";
    }
    cout<<endl;
    names.pop_back();//last item in the vector is removed
                    //pop_back method is kind of opposite of push_back
                    //push_back places an item onto a vector
                    //pop_back takes it off.........and it only takes off one item at a time and thats the last item in the vector
    for (int i = 0;i<names.size();++i)
    {
    cout<<names[i]<<" ";
    }
    cout<<endl;
    names.pop_back();//therefore pop_back is accessing the data item(last item) ,its just that all we are doing is removing it
    for (int i = 0;i<names.size();++i)
    {
    cout<<names[i]<<" ";
    }

    cout<<"\n\n\n";
    return 0;

}
