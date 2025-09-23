#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    char problem;
    string verdict;

    int problemsSolved = 0, totalTime = 0;

    unordered_map<char, bool> solved;
    unordered_map<char, int> wrongAttemps;

    while (true)
    {
        cin >> m >> problem >> verdict;
        if(m == -1) break;

        if(solved[problem]) continue;

        if(verdict == "right") {
            solved[problem] = true;
            problemsSolved++;
            totalTime += m + (wrongAttemps[problem] * 20);
        }
        else wrongAttemps[problem]++;  
    }

    cout << problemsSolved << " " << totalTime;


    return 0;
}