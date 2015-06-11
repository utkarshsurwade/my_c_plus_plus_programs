/*GRADES OF STUDENT ACCORDING TO MARKS OBTAINED FROM 100 IS ~

grading scale

97 - 100    A+
93 - 96     A
90 - 92     A-

87 - 89     B+
83 - 86     B
80 - 82     B-

77 - 79     C+
73 - 76     C
70 - 72     C-

67 - 69     D+
63 - 66     D
60 - 62     D-

0 - 59      F

(if , else if , else statements are used primarily when we have a structured decision to make[if statement is basically a control flow statement])

*/

#include <iostream>

using namespace std;

int main()
{

int marks;
string grade;

cout<<"how many marks have u got?\n";

cin >> marks;

cout<<"then your grade is:";

if ((marks>=97)/*relational expression*/ &&/* "and" logical operator(there are many logical operators such as ~ "and" , "or" , "not" etc)*/ (marks<=100))

{
    cout <<"A+\n";

}
else if((marks>=93) && (marks<=96))


{
    cout << "A\n";



    }

    else if ((marks>=90) && (marks <=92))

    {
        cout<<"A-\n";


    }


     else if ((marks>=87) && (marks<=89))

    {
        cout<<"B+\n";


    }


      else if ((marks>=83) && (marks<=86))

    {
        cout<<"B\n";


    }

    else if ((marks>=80)&& (marks<=82))

    {
     cout<<"B-\n";

    }


    else if ((marks>=77) && (marks<=79))

    {
        cout<<"C+\n";


    }

    else if ((marks>=73)&& (marks<=76))

    {
     cout<<"C\n";

    }

else if ((marks>=70) && (marks<=72))

    {
        cout<<"C-\n";


    }

    else if ((marks>=67)&& (marks<=69))

    {
    cout<<"D+\n";

    }


    else if ((marks>=63) && (marks<=66))

    {
        cout<<"D\n";


    }

    else if ((marks>=60)&& (marks<=62))

    {
    cout<<"D-\n";

    }

    else

    {
        cout<<"F\n";


    }

    return 0;
}
