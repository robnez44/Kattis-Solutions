#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, root = 1;
    cin >> n;

    vector<string> S(n+1);
    for (int i = 1; i <= n; i++) cin >> S[i];

    vector<int> nxt(n+1, 0);
    vector<int> tail(n+1);

    for (int i = 1; i <= n; i++) tail[i] = i;
    
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;

        nxt[tail[a]] = b;
        tail[a] = tail[b];
        root = a; 
    }

    int cur = root;
    while (cur != 0) {
        cout << S[cur];
        cur = nxt[cur];
    }
    cout << "\n";

    return 0;
}
