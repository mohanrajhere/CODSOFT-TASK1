#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;

    // Display the generated random number
    cout << "Generated number : " << randomNumber << endl;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (guess != randomNumber) {
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low. Try again: ";
        } else if (guess > randomNumber) {
            cout << "Too high. Try again: ";
        } else {
            cout << "Congratulations! You guessed the number." << endl;
        }
    }

    return 0;
}
