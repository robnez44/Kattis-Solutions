#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    return a > b;
}

int main(){

    int n;
    cin >> n;
    vector<string> names(n);

    for (int i = 0; i < n; ++i) cin >> names[i];

    if (is_sorted(names.begin(), names.end())) cout << "INCREASING\n";
    else if (is_sorted(names.begin(), names.end(), comp)) cout << "DECREASING\n";
    else cout << "NEITHER\n";

    return 0;
}