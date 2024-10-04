#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, m, p, r = 0;
    cin >> x;
    cin >> m;
    while (m--)
    {
        cin >> p;
        r += x - p;
    }
    cout << r + x << "\n";

    return 0;
}