#include <iostream>
#include <vector>
using namespace std;


// Declare funcction 
void greet ();
void display_misses(int misses);
void display_status(std::vector <char> incorrect, string answer);
void end_game(string answer, string secretWord);


//Define fuctions 

class Hangman{
public:
void greet ()
{
cout<<"welcome to Hangman game";
}

void display_misses(int misses)
{
if(misses==0)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==1)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==2)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==3)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==4)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==5)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}
else if(misses==6)
{
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
}

}

void display_status(vector <char> incorrect, string answer)
{
    cout<<"Incorrect Guesses: \n";

    for(int i = 0; i<incorrect.size (); i++) // using . size because it is a vector(int)
    {
        cout<<incorrect[i] << " ";
    }
    cout<<"\n\n Codeword:\n";

    for (int i= 0; i<answer.length(); i++) // using .length because it is a string
    {
        cout<<answer[i]<<" ";
    }
}


void end_game(string answer, string secretWord)
{
    if (answer == secretWord)
    {
        cout<<"\ncongratulation, you win\n\n";
    }
    else 
    {
        cout<<"sorry, you lost";
        cout<<"\n\nThe secret word is: " << secretWord << endl;
        cout<<"\n";
    }
}
};