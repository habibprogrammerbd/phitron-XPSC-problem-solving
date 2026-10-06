#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int m = 1; m <= n; m++)
            {
                if (i + j + m <= k && i != j && i != m && j != m)
                {
                    sum = max(sum, 1LL * v[i] + v[j] + v[m]);
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}