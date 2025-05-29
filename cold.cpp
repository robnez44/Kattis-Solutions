#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, contador = 0;
    cin >> n;
    
    vector<int> temps(n);
    
    for(int i = 0; i < n; ++i) cin >> temps[i];
    
    for(int i = 0; i < n; ++i) if(temps[i] < 0) contador++;
    
    cout << contador << "\n";

    return 0;
}