#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long int> v(n);
    map<long long int, long long int> mp;

    vector<long long int> pre(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pre[0] = v[0];
    for (int i = 1; i < (int)v.size(); i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    long long int cou = 0;

    for (int i = 0; i < (int)v.size(); i++)
    {
        if (pre[i] == k)
        {
            cou++;
        }
        long long int x = pre[i] - k;
        auto val = mp.find(x);

        if (val != mp.end())
        {
            cou += val->second;
        }

        mp[pre[i]]++;
    }
    cout << cou << endl;
    return 0;
}