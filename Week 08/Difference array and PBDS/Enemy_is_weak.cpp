#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// ---------------- Macros ----------------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define pb push_back
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define endl '\n'
#define fl(i, n) for (int i = 0; i < (n); i++)
#define fr(i, n) for (int i = (n) - 1; i >= 0; i--)

// ---------------- Typedefs ----------------
#define int long long

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define vvi vector<vector<int>>

// ---------------- Debug (local only) ----------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif

// ---------------- PBDS ----------------
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// -----------------YES and NO-------------
inline void YES() { cout << "YES\n"; }
inline void NO() { cout << "NO\n"; }

// ---------------- Solve ----------------

void solve()
{
    int n;
    ll c = 0;
    cin >> n;
    vll v(n), v1(n);

    fl(i, n) cin >> v[i];

    vll left_max;
    pbds<ll> p, q;

    fl(i, n)
    {
        int x = q.size() - q.order_of_key(v[i] + 1);
        left_max.pb(x);
        q.insert(v[i]);
    }

    reverse(all(v));
    reverse(all(left_max));

    fl(i, n)
    {
        int x = p.order_of_key(v[i]);

        c += x * left_max[i];
        p.insert(v[i]);
    }

    cout << c << endl;

    // for (auto x : left_max)
    //     cout << x << " ";

    // cout << c << endl;
}

signed main()
{
    fast_io

    solve();

    return 0;
}