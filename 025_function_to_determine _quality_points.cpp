//wap to determine quality points from a letter grade
#include <iostream>

using namespace std;

int qualitypoints(char grade)
{   int qpts;
    if(grade == 'A'|| grade =='a')//common mistakes~ after logical operator,the whole relational expression must be written again.
                                //[i.e     (grade == 'A'|| grade =='a') and not (grade == 'A'|| 'a')    ]
    {return qpts = 4;}//common mistakes~"==" must be there for characters and strings & "=" for numbers or integers or numerical values.
    else if(grade =='B' || grade == 'b')
    {return qpts = 3;}
    else if(grade =='C' || grade == 'c')
    {return qpts = 2;}
    else if(grade =='D' || grade == 'd')
    {return qpts = 1;}
    else if(grade == 'F' || grade == 'f')
    {return qpts = 0;}
    else
    {cout<<"\nWARNING.............."<<"\n\nWRONG GRADE/CHARACTER ENTERED,THEREFORE RANDOM VALUES WILL BE DISPLAYED.\n";

    }

}

int main()
{
    char gradeletter;
    cout <<"Enter letter grade :";
    cin>>gradeletter;
    cout<<"\nTherefore the quality points according to your grade is "<<qualitypoints(gradeletter)<<"\n\n\n";
    return 0;
}
