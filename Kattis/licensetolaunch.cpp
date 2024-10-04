#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int i, n;
    ll x, min = LLONG_MAX, pos;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if (x < min)
        {
            min = x;
            pos = i;
        }
    }
    cout << pos << "\n";

    return 0;
}