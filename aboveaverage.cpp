#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main(){

    int c, n;

    cin >> c;

    while (c--)
    {
        cin >> n;
        vi grades(n);

        for (int i = 0; i < n; ++i) cin >> grades[i];

        int average = ( accumulate( grades.begin(), grades.end(), 0 ) ) / n;
        int aboveA = 0;

        for (int i = 0; i < n; ++i)
        {
            if (grades[i] > average) aboveA++;
        }

        cout << fixed << setprecision(3) << ((aboveA / (float)n) * 100) << "%\n"; 
    }

    return 0;
}