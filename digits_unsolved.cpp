#include <bits/stdc++.h>
using namespace std;

int digit(string num)
{
    string len, last, neww;
    int i = 0;

    len = num.length(); i++;

    if (num == "1")
        return 1;

    while (true) //  num = 42
    {
        len = num.length(); // len = 42      // len = 1
        neww = len;         // new = 2       // new = 1
        last = num;         // last = 1000, 4,  1
        i++;                // 1
        if (num == last)
            break;
    }

    return i;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "END")
            return 0;

        cout << digit(s) << "\n";
    }

    return 0;
}