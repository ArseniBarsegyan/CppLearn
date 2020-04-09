#include <iostream>
using namespace std;

int Factorial(int number);

int main()
{
	int number;
	cin >> number;
	if (number <= abs(10)) {
		cout << Factorial(number);
	}
	else {
		cout << "Max number is 10";
	}
}

int Factorial(int number) {
	int result = 1;
	if (number <= 1) {
		return result;
	}
	else {
		for (auto i = 1; i <= number; i++) {
			result *= i;
		}		
	}
	return result;
}