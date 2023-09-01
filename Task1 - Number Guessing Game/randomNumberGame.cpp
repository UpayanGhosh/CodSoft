#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;
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