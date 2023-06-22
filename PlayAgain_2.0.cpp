// Программа PlayAgain_2.0
// Демонстрирует работу с циклами do

#include <iostream>
using namespace std;

int main()
{
    char again;
    do
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again? (y/n)";
        cin >> again;
    } while (again == 'y');
    cout << "\nOkay, bro";
    return 0;
}

