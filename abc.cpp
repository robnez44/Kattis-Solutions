#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums(3);
    string s;

    for (int i = 0; i < 3; ++i) cin >> nums[i];
    cin >> s;

    sort(nums.begin(), nums.end());

    for (char c : s)
    {
        if (c == 'A') cout << nums[0] << " ";
        else if(c == 'B') cout << nums[1] << " ";
        else cout << nums[2] << " ";
    }
    cout << "\n";

    return 0;
}