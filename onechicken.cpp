#include <iostream>
using namespace std;

int main(){

    int n, p;
    cin >> n >> p;
    if (n < p)
    {
        cout << "Dr. Chaz will have " << p - n << (p - n == 1 ? " piece" : " pieces") << " of chicken left over!\n";
    }
    else
    {
        cout << "Dr. Chaz needs " << n - p << " more " << (n - p == 1 ? "piece" : "pieces") << " of chicken!\n";
    }

    return 0;
}