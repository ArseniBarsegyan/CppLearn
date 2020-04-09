#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool IsPalindrom(string value);

int main()
{
    string word;
    cin >> word;
    cout << boolalpha << IsPalindrom(word);
}

bool IsPalindrom(string value) {
    for (int i = 0; i < value.size() / 2; i++) {
        if (value[i] != value[value.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
