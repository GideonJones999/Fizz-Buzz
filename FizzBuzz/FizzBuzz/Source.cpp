#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;
void DisplayResults(int);

int main() 
{
	//Loop to 100
	//Call Function
	int i = 0;
	while (i <= 100)
	{
		DisplayResults(i);
		i++;
		Sleep(100);
	}


	system("PAUSE");
	return 0;
}

	void DisplayResults(int i) 
	{
		string output = "";

		if (i % 3 == 0 || i / 10 == 3 || i % 10 == 3)
			output += "Fizz";
		if (i % 5 == 0 || i / 10 == 5 || i % 10 == 5)
			output += "Buzz";

		if (output == "")
			cout << i << endl;
		else
			cout << i << output  << endl;

	}
	void Sleep(int);
	void Sleep(int milliSec) {
		clock_t goal = milliSec + clock(); // clock() is system clock
		while (goal > clock()); // acts as sleep function
	}

