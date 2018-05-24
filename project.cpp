#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
const int max_attempts=10;

int main()
{
    string name,word;
    int attempts=0;
    string states[decidingN2] = {California, New York, Arizona};
    string country[decidingN2] = {United States, China, Russia};
    string president[decidingN2] = {Barack Obama, Bill Clinton, Vladimir Putin};
    states = "a state";
    country = "a country";
    president = "a President";

    int decidingN, decidingN2;
    srand(time(NULL))
    decidingN=rand()%2+0;
    decidingN2=rand()%2+0;

    string variable;

    if (decidingN = 0)
    {
       variable = states;
    }
    else if (decidingN = 1)
    {
        variable = country;
    }
    else if (decidingN = 2)
    {
        variable = president;
    }


    cout << " Let's Play a Game... Guess the name of " << variable << endl;

    string random(word.length(),*)
    cout << " You have " << attempts << left

}

int letterFill
