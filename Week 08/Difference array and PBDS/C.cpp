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

    int p;
    cin >> p;
    while (p--)
    {
        int t, n, m;
        cin >> t >> n >> m;
        ll s = 0;
        for (int i = 1; i <= t; i++)
        {
            int x = n * n;
            s += x;
            if (s > m)
                break;
        }
        cout << s << endl;
    }

    return 0;
}