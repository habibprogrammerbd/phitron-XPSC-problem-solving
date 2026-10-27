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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0, j = 0, count = 0;
        ll ans = 0;

        while (i < n)
        {
            if (v[i] <= q)
                count++;
            else
                count = 0;

            if (count >= k)
            {
                ll x = count - k + 1;
                ans += x;
            }
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}