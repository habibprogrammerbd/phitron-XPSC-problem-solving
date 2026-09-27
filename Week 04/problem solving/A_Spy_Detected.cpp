#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, pair<int, int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].first++;
            mp[x].second = i;
        }

        for (auto [x, y] : mp)
        {
            if (y.first == 1)
            {
                cout << y.second << endl;
            }
        }
    }

    return 0;
}