#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
const int max_attempts=15;

int letterFill(char guess,string secret, string &guessword)
{
    int matches(0);
    int length = secret.length();
    for (int i = 0; i < length; i++)
    {
        if (tolower(guess) == tolower(secret[i])) //ignores capital letters for user input AND the string
        {
            if (guessword[i] == '*')
                guessword[i] = secret[i]; //if correct, it fills in the value for guessword with the actual letter
            else if (guessword[i] != ' ')
                return -1; //signifies that this was already guessed
            matches++;
        }
    }
    return matches;
}

int main()
{
    //declare variables
    string name,word;
    int attempts=0;

    string states[] =  {"Alaska",
                  "Alabama",
                  "Arkansas",
                  "Arizona",
                  "California",
                  "Colorado",
                  "Connecticut",
                  "Delaware",
                  "Florida",
                  "Georgia",
                  "Hawaii",
                  "Iowa",
                  "Idaho",
                  "Illinois",
                  "Indiana",
                  "Kansas",
                  "Kentucky",
                  "Louisiana",
                  "Massachusetts",
                  "Maryland",
                  "Maine",
                  "Michigan",
                  "Minnesota",
                  "Missouri",
                  "Mississippi",
                  "Montana",
                  "North Carolina",
                  "North Dakota",
                  "Nebraska",
                  "New Hampshire",
                  "New Jersey",
                  "New Mexico",
                  "Nevada",
                  "New York",
                  "Ohio",
                  "Oklahoma",
                  "Oregon",
                  "Pennsylvania",
                  "Puerto Rico",
                  "Rhode Island",
                  "South Carolina",
                  "South Dakota",
                  "Tennessee",
                  "Texas",
                  "Utah",
                  "Virginia",
                  "Virgin Islands",
                  "Vermont",
                  "Washington",
                  "Wisconsin",
                  "West Virginia",
                  "Wyoming"};
    int decidingN;
    srand(time(NULL)); //Generates a random value
    decidingN=rand()%50;
    word = states[decidingN]; //Finds a state to set as the secret word.

    cout << "Let's Play a Game... Guess the name of a state" << endl;

    //Create an obscured version of word
    string userGuess = "";
    for(int i = 0; i < word.length(); i++){
        if(word[i] == ' ')
            userGuess += ' '; //adds a space for space characters
        else
            userGuess += '*'; //adds a star for characters in the alphabet
    }


    cout << "You have " << max_attempts << " guesses left" << endl;
    cout << "----------------" << endl;

    int charactersFilled(0);
    while (attempts < max_attempts && charactersFilled < word.length())
    {
        cout << userGuess << endl;
        cout << "Input a letter!" << endl;
        char letter;
        cin >> letter;

        int result = letterFill(letter,word,userGuess);
        if(result == 0)
        {
            cout << "That letter's not there." << endl;
            attempts++;
        }
        else if (result >0)
        {
            cout << "Congratulations, you were correct! Your letter has been filled in." << endl;
        }
        else{
            cout << "You have already guessed that. Guess again." << endl;
        }
        cout << "You have " << (max_attempts - attempts) << " wrong guesses left." << endl;
        cout << "----------------" << endl;

        if(result >= 0)
            charactersFilled += result;
        if (charactersFilled >= word.length()) //Ends the program if the total # of characters filled is greater than or equal to the total # of characters in the word.
        {
            cout << "Congratulations, you have guessed the word!" << endl;
            cout << "It is " << word << endl;

        }

        cout << endl;
    }
    if (attempts == max_attempts)
    {
        cout << "Sorry, you lose." << endl;
        cout << "The word was " << word << endl;
    }
}

