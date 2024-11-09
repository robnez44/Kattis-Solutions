#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t, i;
    ll p, r, f;
    cin >> t;
    while (t--)
    {
        cin >> p >> r >> f;
        if (p == f)
        {
            cout << 1 << "\n";
        }
        else
        {
            for (i = 0; p <= f; i++)
            {
                p *= r;
            }
            cout << i << "\n";
        }
    }

    return 0;
}