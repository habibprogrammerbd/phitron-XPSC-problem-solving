#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        auto it = m.find(s);

        if (it == m.end())
        {
            cout << "OK\n";
            m[s]++;
        }
        else
        {
            cout << it->first << it->second << endl;
            m[s]++;
        }
    }

    return 0;
}