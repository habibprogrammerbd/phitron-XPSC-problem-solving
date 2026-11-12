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
        map<ll, ll> mp;
        ll min_val = 2e18;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            min_val = min(min_val, v[i]);
        }

        // sort(v.begin(), v.end());

        ll g = 0;
        if (mp[min_val] >= 2)
        {
            cout << "Yes\n";
            continue;
        }

        bool x = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == min_val)
                continue;
            if(v[i] % min_val == 0)
            {
                g = __gcd(g, v[i]);
            }
        }

        if (g == min_val)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}