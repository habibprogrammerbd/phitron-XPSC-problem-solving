#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n), d(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;

        d[l - 1] += x;
        d[r - 1 + 1] += -x;
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] + d[i] << " ";
    }

    return 0;
}