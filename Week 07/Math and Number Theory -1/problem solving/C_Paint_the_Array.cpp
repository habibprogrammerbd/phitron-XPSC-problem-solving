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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll g1 = 0, g2 = 0;
        max_element

        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                g1 = __gcd(g1, v[i]);
            }
            else
            {
                g2 = __gcd(g2, v[i]);
            }
        }
        bool x = true, y = true;
        for (ll i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                x = false;
            }
        }
        for (ll i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                y = false;
            }
        }

        if (x)
            cout << g1 << '\n';
        else if (y)
            cout << g2 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}