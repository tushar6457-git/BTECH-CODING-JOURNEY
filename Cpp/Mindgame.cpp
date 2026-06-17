#include <iostream>
using namespace std;

int main() {
    int low = 1, high = 100, guess;
    char response;

    cout << "Think of a number between 1 and 100.\n";
    cout << "I will try to guess it.\n";
    cout << "Respond with:\n";
    cout << "'h' if my guess is too high\n";
    cout << "'l' if my guess is too low\n";
    cout << "'c' if I guessed correctly\n\n";

    while (low <= high) {
        guess = (low + high) / 2;
        cout << "Is your number " << guess << "? (h/l/c): ";
        cin >> response;

        if (response == 'c') {
            cout << "\n💀 I knew it. Your number is " << guess << ".\n";
            break;
        } else if (response == 'h') {
            high = guess - 1;
        } else if (response == 'l') {
            low = guess + 1;
        } else {
            cout << "Don't mess with me. Enter h, l, or c.\n";
        }
    }

    cout << "\nGame over.\n";
    return 0;
}