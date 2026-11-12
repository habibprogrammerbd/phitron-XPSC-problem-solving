#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i + 1;
        }
        int sum = 0;

        for (int i = 0; i <= 1000; i++)
        {
            for (int j = i; j <= 1000; j++)
            {
                if (mp.find(i) != mp.end() && mp.find(j) != mp.end() && __gcd(i, j) == 1)
                {
                    sum = max(sum, mp[i] + mp[j]);
                }
            }
        }

        if (sum == 0)
            cout << -1 << '\n';
        else
            cout << sum << '\n';
    }

    return 0;
}