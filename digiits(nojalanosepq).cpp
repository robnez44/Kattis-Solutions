#include <bits/stdc++.h>
using namespace std;

int digit(string num)
{
    int i = 0;
    string len, last;

    if (num == "1")
        return 1;

    do                      // 123
    {
        last = num;         // 123    // 3      // 1
        num = num.length(); // 3     //  1     // 1
        i++;                // 1    //   2    //  3
    } while (last != num);

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