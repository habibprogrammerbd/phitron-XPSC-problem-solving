#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<ll, tuple<ll, ll, ll>> mp;

    for (ll i = 0; i < m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        mp[i + 1] = {l, r, d};
    }

    vector<ll> op(m + 2, 0);
    map<ll, ll> opre;

    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        op[a]++;
        op[b + 1]--;
    }

    for (ll i = 1; i < m + 2; i++)
    {
        op[i] = op[i - 1] + op[i];
    }

    for (ll i = 0; i < m + 2; i++)
    {
        if (op[i] > 0)
        {
            opre[i] = op[i];
        }
    }

    vector<ll> sp(n + 2, 0);

    for (ll i = 1; i <= m; i++)
    {
        auto it = opre.find(i);

        if (it != opre.end())
        {
            ll x = it->second;
            auto val = mp.find(i);

            auto [l, r, d] = val->second;

            sp[l] += d * x;
            sp[r + 1] += -d * x;
        }
    }

    for (ll i = 1; i < sp.size(); i++)
    {
        sp[i] = sp[i - 1] + sp[i];
    }

    for (ll i = 0; i < n; i++)
    {
        sp[i] = v[i] + sp[i +1];
    }

    for (ll i = 0; i < n; i++)
    {
        cout << sp[i] << " ";
    }
    cout << endl;

    // for(auto [x,y] : mp)
    // {
    //     auto [l,d,r] = y;
    //     cout << x << "------>" << l << " " << d << " " << r << endl;

    // }

    // for (auto [x, y] : opre)
    //     cout << x << " " << y << endl;

    // for (int i = 0; i < op.size(); i++)
    // {
    //     cout << i << "---->" << op[i] << endl;
    // }

    return 0;
}