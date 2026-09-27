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
        int n;
        cin >> n;
        vector<int> sum;
        vector<pair<int, int>> vp;
        for (int i = 1; i <= n; i++)
        {
            sum.push_back(i);
        }

        int sz = sum.size();
        int fs = 1;

        while (sz > 1)
        {
            if (fs == 1 && sz >= 3)
            {
                int a = sum[sz - 3];
                int b = sum[sz - 1];
                int x = ceil((double(a) + b) / 2);
                vp.push_back({a, b});
                sum.erase(sum.begin() + sz - 1);
                sum.erase(sum.begin() + sz - 3);
                sz -= 2;
                sum.push_back(x);
                sz++;
                // cout << a << " " << b;
                fs++;
            }
            else
            {
                int a = sum[sz - 2];
                int b = sum[sz - 1];
                int x = ceil((double(a) + b) / 2);
                vp.push_back({a, b});
                sum.erase(sum.begin() + sz - 1);
                sum.erase(sum.begin() + sz - 2);
                sz -= 2;
                sum.push_back(x);
                sz++;
            }
            // sz--;
        }

        cout << sum[0] << endl;

        for (auto [x, y] : vp)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}