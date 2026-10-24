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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll count = 0;
        ll ans = 0;
        ll f = 0, d = 0;

        for (ll i = 0; i < n; i++)
        {

            ll x = ans += v[i];
            f = (x * (x - 1)) / 2;
            if (f <= k)
            {
                ans = x;
                count++;
            }
            else
            {
                break;
            }

        }

        cout << count << endl;
    }

    return 0;
}