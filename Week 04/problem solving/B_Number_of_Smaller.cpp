#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> va_one(n);
    // vector<pair<int, int>> vp;
    vector<int> va_two(m);
    for (int i = 0; i < n; i++)
    {
        cin >> va_one[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> va_two[i];
    }

    int ans = 0;
    int l = 0;
    int r = 0;
    while (r < m)
    {
        if (l < n && va_one[l] < va_two[r])
        {
            ans++;
            l++;
        }
        else
        {
            cout << ans << " ";
            r++;
        }
        map<int,int> ans;

        ans.find(x)->second
    }

    return 0;
}