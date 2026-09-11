#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        auto it = find(v.begin(), v.end(), x);

        if (it == v.end())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        v.push_back(x);
    }

    return 0;
}