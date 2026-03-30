#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string file, deleted;
    cin >> file;
    cin >> deleted;

    if(n % 2 != 0){
        for (char &c : file){
            if (c == '1') c = '0';
            else c = '1';
        }
    }
    
    if (file == deleted) cout << "Deletion succeeded\n";
    else cout << "Deletion failed\n";
    
    return 0;
}