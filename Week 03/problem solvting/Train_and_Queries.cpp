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
        int n, k;
        cin >> n >> k;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while (k--)
        {
            int st, ls;
            cin >> st >> ls;
            if (mp.count(st) == 0 || mp.count(ls) == 0)
            {
                cout << "NO\n";
            }
            else
            {
                int s, e;
                s = *mp[st].begin();
                e = *mp[ls].rbegin();
                if (s < e)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                    
                }
            }
        }
    }

    return 0;
}