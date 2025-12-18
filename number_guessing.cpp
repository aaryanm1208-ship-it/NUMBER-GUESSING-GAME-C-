#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    char choice;

    srand(time(0));   // Seed for random number

    do {
        number = rand() % 100 + 1;  // Random number between 1 and 100
        attempts = 0;

        cout << "\n====== NUMBER GUESSING GAME ======";
        cout << "\nI have selected a number between 1 and 100.";
        cout << "\nTry to guess it!\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number)
                cout << "Too High!\n";
            else if (guess < number)
                cout << "Too Low!\n";
            else
                cout << "\n🎉 Correct! You guessed it in " 
                     << attempts << " attempts.\n";

        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for playing!\n";
    return 0;
}
