#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Hangman.h"

using namespace std;

int main ()
{
    Hangman hangman;
    hangman.greet();

    string secretWordlist[4] = {"wait", "play", "swim", "bird"};
    int random = rand()%4;
   
    string secretWord = secretWordlist[random];
    
    string answer = "____"; // placeholder for the word
    
    
    int misses = 0; 
    vector<char> incorrect;   // to keep track of the char that gussed incorrectly 
    bool guess = false;
    char letter; 

    // main Logic 
    while (answer != secretWord && misses < 7 )
    {
        hangman.display_misses(misses);   // create function to display misses
        hangman.display_status(incorrect, answer);

        cout<<"\n Enter your guess: "; // ask the user for the input 
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
    
    hangman.end_game(answer, secretWord);


    return 0;
}