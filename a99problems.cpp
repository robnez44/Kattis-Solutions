#include <bits/stdc++.h>
using namespace std;

int main()
{

    float num;
    cin >> num;

    if (num <= 100)
    {
        cout << 99 << "\n";
        return 0;
    }

    if (((ceil(num / 100) * 100) - 1) - num == 50)
        cout << (ceil(num / 100) * 100) - 1 << "\n";
    else
        cout << (round(num / 100) * 100) - 1 << "\n";

    return 0;
}