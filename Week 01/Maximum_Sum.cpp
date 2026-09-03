#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        int len = n - k;
        vector<int> sum;
        for (int i = 0; i <= n - len; i++)
        {
            int ans = 0;
            for (int j = i; j < i + len; j++)
            {
                ans = ans + v[j];
            }
            sum.push_back(ans);
        }

        cout << *max_element(sum.begin(), sum.end()) << endl;

        // cout << sum << endl;
    }
    return 0;
}