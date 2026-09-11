#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    map<string,int> vd;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        auto it = vd.find(v[i]);
        if (it == vd.end())
        {
            cout << v[i] << endl;
            vd[v[i]]++;
        }
    }

    return 0;
}