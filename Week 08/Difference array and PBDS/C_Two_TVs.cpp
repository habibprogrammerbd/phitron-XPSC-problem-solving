#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    bool p = true;
    ll sum = 0;
    for (auto [x, y] : mp)
    {
        sum += y;
        if (sum >= 3)
        {
            p = false;
        }
    }

    if (p)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}