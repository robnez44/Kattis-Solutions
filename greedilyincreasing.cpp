#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    vector<int> nums(n), gis;
    for(int i = 0; i < n; ++i) cin >> nums[i];

    gis.push_back(nums[0]);
    for (int i = 1; i < n; ++i) if (nums[i] > gis[gis.size() -1]) gis.push_back(nums[i]);
    cout << gis.size() << "\n";
    for(int i = 0; i < gis.size(); ++i) cout << gis[i] << " ";

    return 0;
}