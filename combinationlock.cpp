#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, a, b, c;
    while (true)
    {
        cin >> s >> a >> b >> c;
        if(s == 0 && a == 0 && b == 0 && c == 0)
            return 0;
        int totalDegrees = 720 + (((s-a+40) % 40) * 9) + 360 + (((b-a+40) % 40) * 9) + (((b-c+40) % 40) * 9);
        cout << totalDegrees << "\n";   
    }
    return 0;
}