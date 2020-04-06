#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int p = 2;
    vector<int> binaryParts = {};
    while (number > 0) {
        binaryParts.push_back(number % 2);
        number /= p;
    }
    reverse(binaryParts.begin(), binaryParts.end());

    for (auto i : binaryParts) {
        cout << i;
    }
    return 0;
}
