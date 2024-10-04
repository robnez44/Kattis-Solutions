#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll difference(ll num1, ll num2);

int main()
{
    ll n1, n2;
    while (cin >> n1 >> n2)
    {
        cout << difference(n1, n2) << "\n";
    }

    return 0;
}

ll difference(ll num1, ll num2)
{
    return abs(num1 - num2);
}
