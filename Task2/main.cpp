#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generateRandomNumber();
bool isNumberOdd(int number);

int main()
{
	int randomNumber = generateRandomNumber();

	cout << "Random Number: " << randomNumber << endl;
	cout << (isNumberOdd(randomNumber) ? "ODD" : "EVEN") << endl;

	return 0;
}

int generateRandomNumber()
{
	srand(time(0));
	return rand() % 100 + 1;
}

bool isNumberOdd(int number)
{
	return number % 2 == 0 ? false : true;
}