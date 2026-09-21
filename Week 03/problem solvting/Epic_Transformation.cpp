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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        priority_queue<int> pq1;
        for (auto [x, y] : mp)
        {
            pq1.push(y);
        }

        while (!pq1.empty())
        {
            if(pq1.size() < 2)
            {
                break;
            }
            int x, y;
            x = pq1.top();
            pq1.pop();
            y = pq1.top();
            pq1.pop();
            x--, y--;
            if (x >= 1)
            {
                pq1.push(x);
            }
            if (y >= 1)
            {
                pq1.push(y);
            }
        }
        int ans = 0;
        while (!pq1.empty())
        {
            ans += pq1.top();
            pq1.pop();
        }
        cout << ans << endl;
    }

    return 0;
}