#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> m, p;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        if (p.find(a) != p.end())
        {
            string x = p[a];
            m[x] = b;
            p.erase(a);
            p[b] = x;
        }
        else
        {
            m[a] = b;
            p[b] = a;
        }
    }
    cout << m.size() << endl;
    for (auto [x, y] : m)
        cout << x << " " << y << endl;

    return 0;
}