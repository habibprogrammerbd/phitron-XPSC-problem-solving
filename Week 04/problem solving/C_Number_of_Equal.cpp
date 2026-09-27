#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long int ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], cou1 = 0, cou2 = 0;

        while (l < n && a[l] == curr)
        {
            cou1++, l++;
        }

        while (r < m && curr > b[r])
        {
            r++;
        }

        while (r < m && b[r] == curr)
        {
            cou2++, r++;
        }

        ans += (1LL * cou1 * cou2);
    }

    cout << ans << endl;
    queue<int> d;
    d.front

    return 0;
}