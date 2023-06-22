// StressTest

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int MaxPairwiseProductNative(vector<int>& numbers)
{
    int n = numbers.size();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            result = max(result, numbers[i] * numbers[j]);
        }
    }
    return result;
}

int MaxPairwiseProductFast(vector<int>& numbers)
{
    int n = numbers.size();
    int index = 0;

    for (int i = 1; i < n; i++) // индекс макисмального элемента в массиве
    {
        if (numbers[i] > numbers[index])
        {
            index = i;
        }
    }
    swap(numbers[index], numbers[n - 1]);
    
    index = 0;

    for (int i = 1; i < n - 1; i++) // индекс второго по величине элемента массива
    {
        if (numbers[i] > numbers[index]) 
        {
            index = i;
        }
    }
    swap(numbers[index], numbers[n - 2]);

    return numbers[n - 2] * numbers[n - 1];
}

void StressTest(int N, int M)
{
    while (true)
    {
        int n = rand() % (N - 1) + 2;
        vector<int> numbers(n);

        // Заполняем массив случайнми значениями

        for (int i = 0; i < n; i++)
        {
            numbers[i] = rand() % (M + 1);
        }

        // Выводим массив А

        for (int i = 0; i < n; i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
        // Вычисляем результаты с помощью обоих алгоритмов
        int result_1 = MaxPairwiseProductNative(numbers);
        int result_2 = MaxPairwiseProductFast(numbers);

        if (result_1 == result_2) {
            cout << "OK" << endl;
        }
        else {
            cout << "Wrong error!" << result_1 << result_2 << endl;
            return;
        }
    }
}

int main()
{
    int N, M;
    cout << "M: ";
    cin >> M;
    cout << "N: ";
    cin >> N;
    StressTest(N, M);
    return 0;
}

