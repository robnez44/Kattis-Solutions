#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t, lastT, ans;
    while (cin >> n)
    {
        ans = 0; lastT = 0;
        if (n == -1)
            return 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> s >> t;
                ans += s * (t - lastT);
            
            lastT = t;
        }   

        cout << ans << " miles\n";
    }

    return 0;
}