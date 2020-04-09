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

bool IsPalindrom(string value)
{
    if (value == "") {
        return false;
    }
    string originalValue = value;
    reverse(value.begin(), value.end());
    return originalValue == value;
}
