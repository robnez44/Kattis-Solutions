#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int n;
    double q, y, r = 0;
    cin >> n;
    while (n--)
    {
        cin >> q >> y;
        r += q * y;
    }
    cout << fixed << setprecision(3) << r << "\n";

    return 0;
}