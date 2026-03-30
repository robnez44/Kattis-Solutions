#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    unordered_map<int, int> arrows;
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (arrows[h[i]] > 0) arrows[h[i]]--; 
        else result++; 

        arrows[h[i] - 1]++;
    }
    cout << result << "\n";
}