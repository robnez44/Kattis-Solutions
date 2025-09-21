#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    vector<string> area(R); // vector de string || matriz de char

    for (int i = 0; i < R; ++i)
        cin >> area[i];

    int i = 0, j = 0, count = 0;
    vector<vector<int>> visited(R, vector<int>(C, 0));

    while (true)
    {
        if (i < 0 || i >= R || j < 0 || j >= C)
        {
            cout << "Out\n";
            break;
        }
        
        if (area[i][j] == 'T')
        {
            cout << count << "\n";
            break;
        }    

        if (visited[i][j])
        {
            cout << "Lost\n";
            break;
        }
        visited[i][j] = 1;

        char c = area[i][j];

        if (area[i][j] == 'N')
            i--;
        else if (area[i][j] == 'S')
            i++;
        else if (area[i][j] == 'W')
            j--;
        else if (area[i][j] == 'E')
            j++;

        count++;
    }

    return 0;
}