#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> f(n), h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0, r = 0, ans = 0;
        long long sum = 0;

        while (r < n)
        {

            if (l < r && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }
            sum += f[r];
            while (sum > k && l <= r)
            {
                sum -= f[l];
                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        cout << ans << endl;
    }

    return 0;
}