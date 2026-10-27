#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    vector<pair<ll, ll>> ans;

    for (ll i = a; i <= b; i += 2)
    {
        ans.push_back({i, i + 1});
    }

    if (ans.size() >= 1)
    {
        cout << "YES\n";
        for (auto val : ans)
        {
            cout << val.first << " " << val.second << '\n';
        }
    }
    else
        cout << "NO\n";

    return 0;
}