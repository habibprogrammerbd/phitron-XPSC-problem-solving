#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n), num;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max_val = *max_element(v.begin(), v.end());

    int g = 0;

    for (int i = 0; i < n; i++)
    {
        int x = max_val - v[i];
        num.push_back(x);
        mp[v[i]] = x;
        g = __gcd(g, num[i]);
    }

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (mp[v[i]] / g);
    }

    cout << sum << " " << g << '\n';

    return 0;
}