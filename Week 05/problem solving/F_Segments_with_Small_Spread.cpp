#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> v(n);
    multiset<long long> ml;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long sum = 0, ans = 0, mx = 0, mn = 0;
    int r = 0, l = 0;

    while (r < n)
    {
        ml.insert(v[r]);
        mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                long long mn_one = *ml.begin();
                long long mx_one = *ml.rbegin();
                if (mx_one - mn_one <= k)
                {
                    break;
                }
                auto x = ml.find(v[l]);
                ml.erase(x);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}