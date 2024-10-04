#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m;

    if (n == 1)
    {
        k = m;
        for (int i = 0; i < k; ++i)
            cout << "*";
        cout << "\n";
    }
    else if (m % n == 0)
    {
        k = m / n;
        for (int j = 0; j < n; ++j)
        {
            for (int i = 0; i < k; ++i)
                cout << "*";
            cout << "\n";
        }
    }
    else
    {
        int mod = m % n;
        int veces1 = m / n;
        int veces2 = ceil((m * 1.0) / n);
        k = n - mod;
        for (int i = 0; i < k; ++i)
        {
            for (int o = 0; o < veces1; ++o)
                cout << "*";
            cout << "\n";
        }
        for (int j = 0; j < mod; ++j)
        {
            for (int o = 0; o < veces2; ++o)
                cout << "*";
            cout << "\n";
        }
    }
    
    return 0;
}