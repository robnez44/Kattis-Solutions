#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << x << (x % 2 == 0 ? " is even\n" : " is odd\n");
    }

    return 0;
}