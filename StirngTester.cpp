// Программа StirngTester

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1 = "Game"; // создание 1 строки с помощью оператора присвоения
    string word2("Over"); // создание 2 строки, в круглых скобках я задаю строковый объект, который хочу задать в качестве значения переменной
    string word3(3, '!'); // создание 3 строки с помощью числа и символа, word3 = !!!
    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";
    cout << "The phrase has " << phrase.size() << " character in it.\n\n";
    cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L'; // оператор индексации позволяет не только обащаться к отдельным символам в объекте string, но и обеспечивает присваение новых значений
    // я меняю первый символ в объекте phrase на L, поэтому форма приобретает вид - "Lame Over!!!" 
    cout << "The phrase is now: " << phrase << "/n/n";
    for (unsigned int i = 0; i < phrase.size(); ++i)
    {
        cout << "Character at position " << i << " is: " << phrase[i] << endl; // перебираем все существубщие позиции объекта phrase. Он начинается с 0 и доходит до 11.
    }
    // Переменная цикла i является буззнаковым целым (относится к типу unsigned int), поскольку size() возвращает значение именно такого типа.
    cout << "\nThe sequence 'Over' begins at location "; // ищу строковой литерал "Over"
    cout << phrase.find("Over") << endl; // функция find() ищет в вызванном обхекте ту строку, которая быка указана в качестве аргумента данной функции 
    if (phrase.find("eggplant") == string::npos) // искомая строка отсутствует в строке
    // Поскольку строка "eggplant" отсутствует, фунцкия find() возвращает особую константу, определенную в файл string. Обращение к константе происходит с помощью кода string::npos
    {
        cout << "'eggplant' is not in the phrase.\n\n"; // Результат выполнения "'eggplant' is not in the phrase"
    }
    /* При использовании функции find() её можно снабдить необязательным аргументом,
     указывающем на номер того символа, с которой программа должна начать поиски. 
     location = phrase.find("eggplant",5) - поиск начнется с 5 позиции в оюъекте phrase.*/
    phrase.erase(4, 5); /* функция - член erase() удаляет указанную строку их объекта string.
    Один из вариантов вызова, это здадать начальную позицию на удаление и длину подстроки*/
    // phrase,erase(4, 5) - удаляется пятисимвольная строка с позиции 4. Новая фраза принимает вид "Lame!!!"
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase();
    cout << "The phrase is now: " << phrase << endl;
    if (phrase.empty()) /* Функция-член empty() возвращает значение типа bool. оно равно true, если объект string пуст.
       в противном случае возвращает false. */
    {
        cout << "\nThe phrase is no more.\n";
    }
    // Поскольку объект pharse равен пустой строке, метод phrase().empty возвращает true и вывод на экран сообщение.
    return 0;
}   


