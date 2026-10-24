#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> ans;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && i + 4 < n)
            {
                ll val = v[i] + v[i + 2] - v[i + 4];
                ans.push_back(val);
                mp[val]++;
            }
        }

        ll count = 0;
        for (auto [x, y] : mp)
        {
            ll nc = y * (y - 1) / 2;
            count += nc;
        }

        for (int i = 0; i < n; i++)
        {
            if (i + 2 < ans.size() && ans[i] == ans[i + 2])
            {
                count--;
            }
            if (i + 4 < ans.size() && ans[i] == ans[i + 4])
            {
                count--;
            }
        }

        cout << count << endl;
    }

    return 0;
}