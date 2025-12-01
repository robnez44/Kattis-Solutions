#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, value, sum = 0;
    set<ll> bst;
    unordered_map<ll, ll> depths;

    cin >> t;
    while (t--)
    {
        cin >> value;

        auto it = bst.lower_bound(value);
        ll depth = 0;

        ll right = -1;
        if(it != bst.end()) right = depths[*it];

        ll left = -1;
        if(it != bst.begin())
        {
            it--;
            left = depths[*it];
        }

        depth = max(right, left) + 1;
        depths[value] = depth;
        bst.insert(value);

        sum += depth;

        cout << sum << "\n";
    }

    return 0;
}
