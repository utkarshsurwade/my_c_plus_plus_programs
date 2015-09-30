/*wap to display grades and find the total grades and curve them with 5 marks.*/

#include <iostream>
#include <vector>

using namespace std;

int vectorsum (vector<int> vect)
{
    int total = 0;
    for (int i=0;i<vect.size();i++)
        total += vect [i];
    return total ;
}

void displayvector(vector<int> vect)
{
    for (int i=0;i<vect.size();i++)
        cout<<vect[i] << " ";

}

void curvegrades(vector<int> &vect,int amount)//this time we specify the vector as a reference because we are modifying the contents of the parameter
                                            //(in this case the contents on the vector thats being passed in)
{

for (int i =0;i<vect.size();++i)
    vect[i] += amount ;

}

void curvegradestotal(vector<int> vect)
{

int total=0;
for (int i =0;i<vect.size();++i)
    total += vect[i] ;
    cout<<total;
}

int main()
{
    vector<int> grades;
    int total;
    grades.push_back(84);
    grades.push_back(77);
    grades.push_back(92);
    grades.push_back(98);
    grades.push_back(88);
    cout<<"THE ORIGINAL GRADES ARE :";
    displayvector(grades);
    cout<<"\n\nTHE TOTAL IS :";
    cout<<vectorsum(grades);
    curvegrades(grades,10);
    cout<<"\n\nTHE CURVED GRADES ARE :";
    displayvector(grades);
    cout<<"\n\nTHE NEW TOTAL IS :"<<vectorsum(grades)<<endl;
    return 0;
}
/*the key to curve grades is being sure that you pass the vector in by reference.If you pass it by value then it wont make any changes to
the vector in the main program,it would change the vector in the function call itself but when controle goes back to the main program then the values
 in the vector will stay the same as they were before the function was called.*/
