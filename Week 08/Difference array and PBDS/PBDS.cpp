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

    int n;
    cin >> n;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }

    // cout << p.order_of_key(8) << '\n';

    // cout << *p.find_by_order(0) << '\n';

    for (auto x : p)
        cout << x << " ";
    cout << '\n';

    return 0;
}