/*find the area,circumference,volume of a circle and use addition,multiplication ,subtraction,division,
modulous/remainder operators to solve a given simple equation.*/

#include <iostream>

#include <cmath>/*This library provides advanced mathematical function to use in our programes such as fmod(,)  ,  pow(,)  ,  abs().....
for finding absolute value and      sqrt().....for finding underroot of a value etc.
 */
using namespace std;

int main()
{
    double radius,num1,num2;

    const double pi = 3.14159265 ;

    cout << "what is the radius of the circle?" << endl;

    cin>>radius;

    cout<<"\nThen area of the circle is:"<<pi * pow(radius,2)<<endl;
    cout<<"Then the circumference of the circle is:"<<2*pi*radius<<endl;
    cout<<"Then the volume of the circle is:"<<(4/3.0)/*while dividing ,to get quotient or numerator in decimal form ,we have to make one part of the function in decimal form[here "3.0"]*/*pi*pow(radius,3)<<endl;
    cout<<"then the surface area of the circle is:"<<4*pi*pow(radius,2)<<endl;

    cout<<"\nEnter two numbers:";
    cin>>num1>>num2;
    cout<<"Therefore the addition,subtraction,multiplication,division & modulous/remainder of the two nos. is:\n\n";
    cout<<"addition = "<<num1 + num2;
    cout<<"\nsubtraction = "<<num1 - num2;
    cout<<"\nmultiplication = "<<num1 * num2;
    cout<<"\ndivision = "<<num1 /num2;//the result be the quotient
  /*cout<<"\nremainder = "<<num1 % num2; (modulous operator works with whole numbers only,in this case
    we have taken double [folating point]as our data type).it is defined for whole numbers only*/
    cout<<"\nremainder = "<<fmod(num1,num2)<<"\n\n";//to overcome the above problem,we use fmod function in the cmath library


    return 0;
}
