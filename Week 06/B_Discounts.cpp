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
        int n, k;
        cin >> n >> k;
        vector<int> v(n), d(k);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> d[i];
        }

        sort(v.begin(), v.end(), greater<int>());
        sort(d.begin(), d.end());
        int j = 0;
        ll ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (j + d[i] > n)
            {
                break;
            }
            else
            {
                ans += v[j + d[i] - 1];
            }
            j += d[i];
        }

        cout << abs(accumulate(v.begin(), v.end(), 1LL * 0) - ans) << endl;
    }

    return 0;
}