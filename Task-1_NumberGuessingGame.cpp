/*
  Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number. 
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class GuessNumberGame {
private:
    int targetNumber;
    int guess;
    int attempts;

public:
    GuessNumberGame() {
        srand(time(0));
        targetNumber = rand() % 100;
        guess = 0;
        attempts = 0;
    }

    void play() {
        cout << "*** Guess Number Game ***\n" << endl;

        do {
            cout << "Enter your guess between 1 to 100: ";
            cin >> guess;
            attempts++;

            if (guess > targetNumber) {
                cout << "Too High!" << endl;
            } else if (guess < targetNumber) {
                cout << "Too Low!" << endl;
            } else {
                cout << "\nCorrect! You took " << attempts << " attempts!" << endl;
            }
        } while (guess != targetNumber);
    }
};

int main() {
    GuessNumberGame game;
    game.play();

    return 0;
}
