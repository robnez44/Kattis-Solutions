#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p, a, b, c, d, n;
    double r, next, maxDiff = 0, maxx;
    cin >> p >> a >> b >> c >> d >> n;

    maxx = r = p * (sin((a * (1)) + b) + cos((c * (1)) + d) + 2);

    for (int i = 1; i <= n - 1; ++i)
    {
        r = p * (sin((a * (i)) + b) + cos((c * (i)) + d) + 2);
        next = p * (sin((a * (i + 1)) + b) + cos((c * (i + 1)) + d) + 2);

        if (maxx > next)
        {
            maxx = max(maxx, r);
            maxDiff = max(maxDiff, maxx - next);
        }
        else
            maxx = next;
    }
    cout << fixed << setprecision(6) << maxDiff << "\n";

    return 0;
}