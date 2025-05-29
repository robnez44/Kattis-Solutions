#include <bits/stdc++.h>
using namespace std;

int main(){

    int X, Y, A;
    cin >> X >> Y;

    if (Y == 1)
    {
        if (X == 0) cout << "ALL GOOD\n";
        else cout << "IMPOSSIBLE\n";
    }
    else cout << fixed << setprecision(6) << (double)X / (1 - Y) << "\n";
    
    return 0;
}