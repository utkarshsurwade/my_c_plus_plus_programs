//questions and answers (an interactive game)

#include <iostream>

using namespace std;

int main()
{
    string response , answer = "watson";
    cout << "lets play a guessing game!\n" << endl;
    cout << "          (You get five tries)\n" << "\nWhat is the name of the computer that played jeopardy???";
    getline(cin,response);
    if (response == answer)
    {
        cout<<"\nthats right answer!!!\n\n\n";
    }
    else
    {
    cout<<"\nthats not the right answer\n\n          (four tries left) \n\nwhat is the name of the computer that played jeopardy???";
    getline(cin,response);
        if (response == answer)
        {
        cout<<"\nthats right answer!!!\n\n\n";
        }
        else
        {
        cout<<"\nthats still not the right answer\n\n          (three tries left)"
            <<"\n\nwhat is the name of the computer that played jeopardy???";
            getline(cin,response);
            if (response == answer)
            {
            cout<<"\nthats right answer!!!\n\n\n";
            }
            else
            {
            cout<<"\nthats still not the right answer\n\n          (two tries left)"
                <<"\n\nwhat is the name of the computer that played jeopardy???";
                getline(cin,response);
                    if (response == answer)
                    {
                    cout<<"\nthats right answer!!!\n\n\n";
                    }
                    else
                    {
                    cout<<"\nthats still not the right answer \n\n          (You now have one last try.....make it count)\n"
                        <<"\nwhat is the name of the computer that played jeopardy???";
                        getline(cin,response);
                        if (response == answer)
                        {
                        cout<<"\nthats right answer!!!\n\n\n";
                        }
                        else
                        {
                        cout <<"\n\nthats not the right answer,you are out of tries......."
                             <<"\n\nthe correct answer is watson\n\n\n\n\n";
                        }
                    }
            }//this is called
        }//indentation
    }//it makes the programme more readable for users.
    return 0;
}
