#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> Reversed(const vector<int>& v);

int main()
{
    vector<int> v = { 1, 5, 3, 4, 2 };
    vector<int> reversedV = Reversed(v);
    return 0;
}

vector<int> Reversed(const vector<int>& v)
{
    vector<int> result;
    result.resize(v.size());
    reverse_copy(v.begin(), v.end(), result.begin());
    return result;
}
