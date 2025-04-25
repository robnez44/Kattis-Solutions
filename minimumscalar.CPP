#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t, n;
    long long int minScalarProduct;
    
    cin >> t;

    for(int i = 0; i < t; ++i){
        
        cin >> n;

        minScalarProduct = 0;
        
        vector<int> x(n), y(n);
        
        for(int j = 0; j < n; j++)
            cin >> x[j];

        for(int j = 0; j < n; j++)
            cin >> y[j];

        sort(x.begin(), x.end());
        sort(y.begin(), y.end(), greater<int>());
        
        for(int j = 0; j < n; ++j){
            minScalarProduct += (long long)x[j]*y[j];
        }
        cout << "Case #" << i+1 << ": " << minScalarProduct << "\n";

    }
    
    return 0;
}