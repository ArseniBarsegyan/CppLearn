#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Finding GCD of two numbers
int main()
{
	vector<int> v1 = {};
	vector<int> v2 = {};
	int number1, number2;
	cin >> number1 >> number2;

	if (number1 > 1) {
		for (auto i = 1; i <= number1; i++) {
			if (number1 % i == 0) {
				v1.push_back(i);
			}
		}
	}

	if (number2 > 1) {
		for (auto i = 1; i <= number2; i++) {
			if (number2 % i == 0) {
				v2.push_back(i);
			}
		}
	}

	vector<int> v3 = {};
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3));

	int max_value = *max_element(v3.begin(), v3.end());
	cout << max_value;
	return 0;
}
