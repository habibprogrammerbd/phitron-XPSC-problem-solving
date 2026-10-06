#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long ans = n + 1, sum = 0;

    while (r < n)
    {
        sum += v[r];

        if (sum >= k)
        {
            ans = min(ans, 1LL * r - l + 1);
            while (sum >= k && l <= r)
            {
                ans = min(ans, 1LL * r - l + 1);
                sum -= v[l];
                l++;
            }
        }

        r++;
    }

    if (ans == n + 1)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}