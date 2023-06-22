// Программа "Угадай чсило"

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
    int SecretNumber = rand() % 100 + 1; // случайное число в диапозоне от 1 до 100
    int tries = 0;
    int guess;
    cout << "\tWelcome to Guess My Number\n\n";
    do 
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;
        if (guess > SecretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < SecretNumber)
        {
            cout << "Too low!\n\n";
        }
        else 
        {
            cout << "\nThat's it! You got it in " << tries << " guess!\n";
        }
    } while (guess != SecretNumber);

    return 0;
}

