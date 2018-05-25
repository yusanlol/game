# game
/*

Our goal was to make a hangman-type guessing game for states in the U.S., with a maximum number of guesses being 15.

The function letterFill serves these purposes:
1. Makes the user input non-case sensitive.
2. Returns a value if the user input letter is a match or not.

In the main function, we have an array states[] which holds 50 values, the United States of America.

We used a random generator to generate a value (passed onto the variable decidingN), which is then used to search through the array for the corresponding state for that value, which is then in turn set as the "secret word" the user has to guess.

The string userGuess is used to encrypt the word, using * for alphabet characters and accounting for spaces in the name of states. (i.e. New Jersey)

We then used a while loop and various if/else if statements to code the game, using the function letterFill and the value returned to fill in letters in the encrypted word. 

To finish the program, we set it to terminate and display a congratulatory message if the # of characters filled is greater than or equal to the length of the encrypted word.

If the guesses are all used up (when attempts == max_attempts), the program terminates and displays a failure message and the un-encrypted word to the user.

We used the include statements <iostream>, <string>, <cstdlib>, and <ctime> for this project.


Abhi and Alec
Computer Science 110
May 2018

*/
