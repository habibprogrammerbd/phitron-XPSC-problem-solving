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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n), pr(n, 0), sp(n, 0),m(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        pr[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            pr[i] = pr[i - 1] + v[i];
        }

        sp[n - 1] = v[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            sp[i] = sp[i + 1] + v[i];
        }

        for (ll i = 0; i < n; i++)
        {
           m[i] = sp[i] + pr[i];
        }

        ll idx = 0, mn = LLONG_MAX;

        for (ll i = 0; i < n; i++)
        {
            if(mn > m[i])
            {
                mn = m[i];
                idx = i+1;
            }
        }
        cout << idx << endl;
        
        

        
    }

    return 0;
}