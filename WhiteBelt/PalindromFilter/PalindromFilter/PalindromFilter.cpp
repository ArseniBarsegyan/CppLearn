#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsPalindrom(string value);
vector<string> PalindromFilter(vector<string> words, int minLength);

int main()
{
    return 0;
}

bool IsPalindrom(string value) {
    for (int i = 0; i < value.size() / 2; i++) {
        if (value[i] != value[value.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> result = {};
    for (auto word : words) {
        if (word.size() >= minLength) {
            if (IsPalindrom(word)) {
                result.push_back(word);
            }
        }
    }
    return result;
}
