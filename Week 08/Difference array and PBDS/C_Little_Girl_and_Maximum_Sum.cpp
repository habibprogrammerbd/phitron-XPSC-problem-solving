#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> v(n), d(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        d[l - 1] += 1;
        d[r] += -1;
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());
    for (int i = 0; i < n; i++)
    {
        sum += (d[i] * v[i]);
    }

    cout << sum << '\n';

    return 0;
}