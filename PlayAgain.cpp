// Программа PlayAgain
// Демонстрирует работу с циклами while

#include <iostream>
using namespace std;

int main()
{
    char again = 'Y';
    while (again == 'Y')
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want play again? (Y/n):";
        cin >> again;
    }
    cout << "\nOkay, bye";
    return 0;
}

