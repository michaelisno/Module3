#include <iostream>

using namespace std;

bool isInputValid(int userInput);

int incrementByOne(int i);
int incrementByTwo(int i);
int incrementByFour(int i);
int divideByTwo(int i);
int subtractOriginalNumber(int i, int originalNumber);

int main()
{
	cout << "Enter an integer between 1 and 20:" << endl;

	int userInput;
	cin >> userInput;

	if (isInputValid(userInput))
	{
		cout << "Result: " << subtractOriginalNumber(divideByTwo(incrementByFour(incrementByTwo(incrementByOne(userInput)))), userInput) << endl;
	}
	else
	{
		cout << "Invalid Input!" << endl;
	}


	return 0;
}

bool isInputValid(int userInput)
{
	if (userInput <= 20 && userInput >= 1)
		return true;
	else
		return false;
}

int incrementByOne(int i)
{
	cout << i;
	return i+= 1;
}

int incrementByTwo(int i)
{
	cout << i;
	return i += 2;
}

int incrementByFour(int i)
{
	cout << i;
	return i += 4;
}

int divideByTwo(int i)
{
	cout << i;
	return i / 2;
}

int subtractOriginalNumber(int i, int originalNumber)
{
	cout << i;
	return i - originalNumber;
}