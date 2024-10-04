#include <bits/stdc++.h>
using namespace std;

int main(){

    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0)
    {
        cout << "Not a moose\n";
    }
    else if (l == r)
    {
        cout << "Even " << l + r << "\n";
    }
    else
    {
        cout << "Odd " << ((l > r) ? l*2 : r*2);
    }
    
    return 0;
}