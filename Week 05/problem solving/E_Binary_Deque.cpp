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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                sum += 1;
        }

        if (sum < k)
        {
            cout << -1 << endl;
        }
        else
        {
            int l = 0, r = 0, curr = 0, ans = 1e9;

            while (r < n)
            {
                curr += v[r];

                if (curr == k)
                {
                    ans = min(ans, n - (r - l + 1));
                }
                else
                {
                    while (curr > k && l <= r)
                    {
                        curr -= v[l];
                        l++;
                    }
                    if (curr == k)
                    {
                        ans = min(ans, n - (r - l + 1));
                    }
                }
                r++;
            }
            cout << ans << endl;
        }
    }

    return 0;
}