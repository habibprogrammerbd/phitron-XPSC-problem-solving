#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    int mn = 0;
    for (auto [x, y] : m)
    {
        mn = max(mn, y);
    }
    cout << mn << endl;

    return 0;
}