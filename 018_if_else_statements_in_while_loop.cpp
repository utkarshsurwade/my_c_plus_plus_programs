//wap using while loop  to play a guessing game(same game as usual)~what is the programme that played jepordy(u get 5 tries)
//if ,else if statements in while loop
#include <iostream>

using namespace std;

int main()
{
    int tries=5 ;
    string answer = "watson", response;
    cout << "Lets play a guessing game\n";
    cout<<"\n\t(you get five tries)\n";

    while(tries > -1)
    {
        cout << "\nwhat is the name of the computer that played jepardy :";
        cin>>response;
        if (response == answer)

        {
            cout<<"\nThats right\n";
            tries = -1;
        }

       else

        {
            cout<<"\nthats not right\n\n";
            --tries;

            if(tries == 4)
            {
                cout<<"\t(now you have four tries left)\n";
            }

             else if (tries == 3)
            {
                cout<<"\t(now you have three tries left)\n";
            }

            else if(tries == 2)
            {
                cout<<"\t(now you have two tries left)\n";
            }

            else if(tries == 1)
            {
                cout<<"\t(now you have one last try....make it count!!!)\n";
            }

            else
            {
                cout<<"\t(sorry you are out of tries)\n\nThe correct answer is watson\n\n";
                tries=-1;
            }


        }

    }
    return 0;
}
