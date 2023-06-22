// Программа Finicky_Counter
// Цикл while

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        count += 1;
        // заканчиваем цикл, если значение count превышает 10
        if (count > 10)
        {
            break;
        }
        // пропускаем число 5
        if (count == 5)
        {
            continue; // вернуться к началу цикла
        }
        cout << count << endl;
    }
    return 0;
}

