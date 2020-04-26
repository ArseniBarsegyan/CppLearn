#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
	string Status;
};

vector<string> SplitString(const string& str);

int main()
{
	int operationsCount;
	cin >> operationsCount;

	string input;
	vector<Person> people;

	vector<int> worriedCount;

	for (int i = 0; i < operationsCount + 1; i++) {
		getline(cin, input);
		int number = 1;
		
		vector<string> splitString = SplitString(input);
		if (splitString.size() > 1) {
			number = stoi(splitString[1]);
		}
		string command = splitString[0];

		// cin >> input >> number;
		if (command == "WORRY") {
			people[number].Status = "Worried";
		} else if (command == "QUIET") {
			people[number].Status = "Quiet";
		} else if (command == "COME") {
			if (number > 0) {
				for (int i = 0; i < number; i++) {
					Person person;
					person.Status = "Quiet";
					people.push_back(person);
				}				
			}
			else {
				for (int i = 0; i < abs(number); i++) {
					people.pop_back();
				}				
			}
		} else if (input == "WORRY_COUNT") {
			int count = 0;
			for (auto& person : people) {
				if (person.Status == "Worried") {
					count++;
				}
			}
			worriedCount.push_back(count);
		}
	}
	for (auto number : worriedCount) {
		cout << number << endl;
	}

	return 0;
}

vector<string> SplitString(const string& str) {
	vector<string> words;

	string word;
	for (auto& x : str) {
		if (x == ' ') {
			words.push_back(word);
			word = "";
		}
		else {
			word += x;
		}
	}
	if (count(words.begin(), words.end(), word)) {
	} else {
		words.push_back(word);
	}
	return words;
}