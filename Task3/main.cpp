#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int sumOfRange(int number, int cycles);

int main()
{
	cout << "Enter an integer: " << endl;

	int userInput;
	cin >> userInput;

	cout << "Sum of Range: " << sumOfRange(userInput, userInput) << endl;

	return 0;
}

int sumOfRange(int i, int cycles)
{
	if (cycles > 0)
		return sumOfRange(i += i, cycles -= 1);
	else
		return i;
}