#include <iostream>
#include <cstdlib> // For using the srand fucntion
#include <ctime>   // For using the time function
using namespace std;
int main()
{
    // We will generate a random number using the srand function which takes an unsigned integer as input. Now to generate a random number everytime the user runs the program we will use the time function to get a number.
    srand(time(NULL));                     // Here we are passing NULL to get the current time from our desktop.
    int randomNumber = (rand() % 100) + 1; // Gives us a random number between 1 - 100. We can set the limit of number according to our need.
    int guess, count = 0;
    cout << "Guess a number between 1 - 100: " << endl;
    while (guess != randomNumber)
    {
        cin >> guess;
        if (guess > randomNumber)
        {
            cout << "Oops!! You have guessed it higher" << endl;
            count++;
        }
        else if (guess < randomNumber)
        {
            cout << "Oops!! You have guessed it lower" << endl;
            count++;
        }
        else
        {
            count++;
            cout << "BINGO!! You guessed it right." << endl;
            cout << "You took " << count << " attempts to guess the number." << endl;
            cout << "Thank you for playing the game :)";
        }
    }

    return 0;
}