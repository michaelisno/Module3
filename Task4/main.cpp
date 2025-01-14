#include <iostream>

using namespace std;

int printFirstHalf(int cycles, int num);
int printBottomHalf(int cycles, int num, int userInput);

int main()
{
	cout << "Please enter a number: ";

	int userInput;
	cin >> userInput;
	cout << endl;

	int topHalf = userInput / 2;

	if (userInput % 2 != 0)
		topHalf += 1;

	printFirstHalf(topHalf, 1);
	printBottomHalf(1, userInput - topHalf, userInput);

	return 0;
}

int printFirstHalf(int cycles, int num)
{
	for (int s = (cycles - 1); s > 0; s--)
		cout << " ";

	for (int x = (num * 2) - 1; x > 0; x--)
		cout << "*";

	cout << endl;

	if (cycles > 1)
		return printFirstHalf(cycles -= 1, num += 1);
	else
		return 0;
}

int printBottomHalf(int cycles, int num, int userInput)
{
	int requiredSpaces = 0;

	for (int s = cycles; s > 0; s--)
		requiredSpaces += 1;

	if (userInput % 2 == 0)
		requiredSpaces -= 1;

	for (int i = requiredSpaces; i > 0; i--)
		cout << " ";

	for (int x = (num * 2) - 1; x > 0; x--)
		cout << "*";

	cout << endl;

	if (num > 1)
		return printBottomHalf(cycles += 1, num -= 1, userInput);
	else
		return 0;
}