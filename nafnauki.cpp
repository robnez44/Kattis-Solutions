#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;

    cin >> s;

    size_t index = s.find_last_of(".");
    string ext = s.substr(index);
    cout << ext << "\n";


    return 0;
}