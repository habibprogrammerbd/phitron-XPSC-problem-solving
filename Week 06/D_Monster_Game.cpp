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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 1; i < n; i++)
        {
            b[i] += b[i - 1];
        }

        sort(a.rbegin(),a.rend());

        ll ans = 0;
        for (auto x : a)
        {
            int v = a.back();
            while (!a.empty() && a.back() < v)
            {
                a.pop_back();
            }

            ll p = a.size();

            auto it = upper_bound(b.begin(), b.end(), p);

            ans = max(ans, v * (ll)(it - b.begin()));
            a.pop_back();
        }

        cout << ans << endl;
    }

    return 0;
}