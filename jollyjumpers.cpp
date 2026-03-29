#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    int n;
    while (cin >> n)
    {
        vi arr(n);
        vector<bool> seen(n, false);

        for (int i = 0; i < n; ++i) cin >> arr[i];

        if (n == 1)
        {
            cout << "Jolly\n";
            continue;
        }
        
        bool flag = true;
        for (int i = 0; i < n - 1; ++i)
        {
            int diff = abs(arr[i] - arr[i + 1]);
            if (diff == 0 || diff >= n || seen[diff])
            {
                flag = false;
                break;
            }
            seen[diff] = true;
        }

        for (int i = 1; i < n; ++i)
        {
            if (!seen[i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "Jolly\n" : "Not jolly\n");
    }
    return 0;
}