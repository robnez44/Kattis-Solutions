#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    vi nums;
    int n;
    for (int j = 1; cin >> n; j++)
    {
        nums.resize(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        cout << "Case " << j << ": " << min << " " << max << " " << max - min << "\n";
    }
    
    return 0;
}