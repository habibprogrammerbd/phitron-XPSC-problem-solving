#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> m;
    string key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        cin >> m[key];
    }

    for (auto [x, y] : m)
        cout << x << " " << y << endl;

    return 0;
}