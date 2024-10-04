#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a < b)
        {
            if ((a + b == c) || (b - a == c) || (a * b == c) || ((b % a == 0) && (b / a == c)))
                cout << "Possible\n";
            else
                cout << "Impossible\n";
        }
        else
        {
            if ((a + b == c) || (a - b == c) || (a * b == c) || ((a % b == 0) && (a / b == c)))
                cout << "Possible\n";
            else
                cout << "Impossible\n";
        }
    }
    
    return 0;
}
