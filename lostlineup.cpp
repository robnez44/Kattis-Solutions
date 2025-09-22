#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{

    int n;
    cin >> n;
    vi ppl(n - 1), orden(n, 1);

    for (int i = 0; i < n - 1; ++i) cin >> ppl[i];

    for (int i = 0; i < ppl.size(); ++i)
    {
        auto it = find(ppl.begin(), ppl.end(), (*min_element(ppl.begin(), ppl.end()) + i ) );
        orden[i+1] = distance(ppl.begin(), it) + 2;
    }

    for (int i = 0; i < n; ++i) cout << orden[i] << " ";
    cout << "\n";

    return 0;
}