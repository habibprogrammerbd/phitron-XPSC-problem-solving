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
        int n;
        cin >> n;

        vector<pair<int, int>> ans;
        for (int i = 1; i <= n; i++)
        {
            int x = __gcd(i, n);
            ans.push_back({x, i});
        }

        // sort(ans.begin(), ans.end());
        sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.first > b.first; });

        for (auto p : ans)
        {
            cout << p.second << " ";
            set<int> d;
            d.insert
        }
        cout << "\n";
    }
    return 0;
}
