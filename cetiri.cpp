#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    vi numbers(3);
    for (int i = 0; i < 3; i++) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());

    int diff = (numbers[1] - numbers[0] < numbers[2] - numbers[1]) ? numbers[1] - numbers[0] : numbers[2] - numbers[1];

    for (int i = 0; i < 2; ++i)
    {
        if (numbers[i] + diff != numbers[i + 1])
        {
            cout << numbers[i] + diff << "\n";
            return 0;
        }
    }
    cout << numbers[2] + diff << "\n";

    return 0;
}