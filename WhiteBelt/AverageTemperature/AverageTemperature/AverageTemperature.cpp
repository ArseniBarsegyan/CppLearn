#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/*  Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. 
Найдите номера дней (в нумерации с нуля) со значением температуры выше 
среднего арифметического за все N дней.
Гарантируется, что среднее арифметическое значений температуры является целым числом.
    Формат ввода
Вводится число N, затем N неотрицательных целых чисел — значения температуры 
в 0 - й, 1 - й, ... (N−1)-й день.
    Формат вывода
Первое число K — количество дней, значение температуры в которых выше среднего арифметического.
Затем K целых чисел — номера этих дней.
*/
int main()
{
    int count;
    cin >> count;
    vector<int> values(count);
    for (int i = 0; i < count; i++) {
        int number;
        cin >> number;
        values[i] = number;
    }
    int average = 0;
    if (count != 0) {
        average = accumulate(values.begin(), values.end(), 0) / count;
    }

    int daysCount = 0;

    vector<int> days;
    for (int i = 0; i < values.size(); i++) {
        if (values[i] > average) {
            days.push_back(i);
            daysCount++;
        }
    }

    cout << daysCount << endl;
    for (auto v : days) {
        cout << v << " ";
    }
    return 0;
}