#include <isotream>
#include <vector>
#include <string>
#include "Hangman.h"
using namespace std;

int main ()
{
    greet();

    string secretWord = "mysecretword"
    string answer = "____________" // placeholder for the word
    int misses = 0; 
    vector<char> incorrect;   // to keep track of the char that gussed incorrectly 
    bool guess = false;
    char letter; 

    // main Logic 
    while (answer != secretWord && misses < 7 )
    {
        display_misses(misses);   // create function to display misses
        display_status(incorrect, answer);

        cout<,"\n Enter your guess: "; // ask the user for the input 
        cin>>letter;

        for (int i=0 ; i < secretWord.length(); i++)
        {
            if(letter == secretWord[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            cout<<"\nCorrect\n";
        }
        else 
        {
            cout<<"\nIncorrect\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    
    end_game(answer, secretWord);


    return 0;
}