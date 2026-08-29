#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[5 + 1][5 + 1];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> n[i][j];
        }
    }
    bool x = false;
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (n[i][j] == 1)
            {
                ans = abs(i - 3) + abs(j - 3);
                break;
            }
        }
        if (x == true)
            break;
    }
    cout << ans << endl;
    return 0;
}