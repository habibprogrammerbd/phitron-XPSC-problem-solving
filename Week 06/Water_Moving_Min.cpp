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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        if (k >= n-1)
        {
            cout << accumulate(v.begin(), v.end(), 0) << endl;
        }
        else
        {
            int sum = 0;

            for (int i = 0; i <= k; i++)
            {
                sum+=v[i];
            }
            
            cout << sum << endl;
        }
    }

    return 0;
}