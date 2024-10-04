#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int n, g, pos, dif;
    vi gnomes;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> g;
        gnomes.resize(g);
        for (int j = 0; j < g; ++j)
        {
            cin >> gnomes[j];
        }
        for (int j = 0; j < g; ++j)
        {
            if (gnomes[j + 1] != gnomes[j] + 1)
            {
                cout << j + 2 << "\n";
                break;
            }
        }
    }

    return 0;
}