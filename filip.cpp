#include <bits/stdc++.h>
using namespace std;

int fun(string s1, string s2)
{
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int num1 = stoi(s1);
    int num2 = stoi(s2);

    return max(num1, num2);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << fun(s1, s2) << "\n";

    return 0;
}