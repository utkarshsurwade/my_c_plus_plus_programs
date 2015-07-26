//wap to find max value using functions
//wap to convert fahrenheit to celsius
#include <iostream>

using namespace std;

int maximum(int a,int b,int c)//multi parameter function[the parameter list contains three parameters]
{
    int largest;
    if (a>b)
    largest = a;//no need for the body of if statement to be in block because the body has only one statement(which does some work)
    else
    largest = b;//no need for curly braces
    if(c>largest)
    largest = c;
    return largest;//no need for curly braces

}

double ftoc(double temp)
{
    return (temp -32) * (5.0/9);//return this value to the function[later this value will be called by our main function]
}

double ctof(double temp)
{
    return (temp * (9/5.0) + 32);//return this value to the function[later this value will be called by our main function]
}

double convertemp(double finaltemp,char finalscale)
{
 if (finalscale == 'f')
    return ctof(finaltemp);//having two return statements in a single function is perfectly acceptable
 else if (finalscale == 'c')
    return ftoc(finaltemp);//since only one of them is going to be executed
}

int main()
{
    int num1,num2,num3,maxvalue;
    double temperature,convertedtemp;
    char scale;
    cout << "Enter first number :";
    cin>>num1;
    cout << "Enter second number :";
    cin>>num2;
    cout << "Enter third number :";
    cin>>num3;
    maxvalue = maximum(num1,num2,num3);//argumet list(here num1,num2,num3) should match the parameters and also the data type should be same(here int)
    cout<<"Therefore the maximum value is :"<<maxvalue<<"\n\n";
    cout<<"Enter temperature and scale to convert to :";
    cin>>temperature>>scale;
    convertedtemp = convertemp(temperature,scale);
    cout<<"\nThe converted temperature is "<<convertedtemp<<"\n\n";
    return 0;
}

