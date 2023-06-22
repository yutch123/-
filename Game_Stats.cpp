// Программа Game_Stats

#include <iostream>
using namespace std;

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;
	score = 0;
	distance = 1200.76;
	playAgain = 'Y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	// пропускаем shieldsUp, поскольку булевы значения,
	// как правило, на экран не выводится
	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel; " << fuel << endl;
	typedef unsigned short int ushort; // этот код использует новое имя для типа unsignedshortint. 
	// typedef часто применяется для создания более коротких имен для типов с длинными именами.
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
}


