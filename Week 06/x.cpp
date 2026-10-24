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
        long long int n, m, h;
        cin >> n >> m >> h;
        vector<long long int> a(n);
        vector<pair<long long int, long long int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (m--)
        {
            long long int b, c;
            cin >> b >> c;
            v.push_back({b, c});
        }
        for (long long int i = v.size() - 1; i >= 0; i--)
        {
            if (a[v[i].first - 1] + v[i].second <= h)
            {
                a[v[i].first - 1] = a[v[i].first - 1] + v[i].second;
            }
            else
            {
                break;
            }
        }
        for (long long int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
ki problem hocche ekhane ?