#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, string>> v;
    int con = 0;

    for (int i = 0; i < n; i++)
    {

        bool x = false;

        string a, b;
        cin >> a >> b;

        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first == a && v[j].second == b)
            {
                x = true;
                con++;
            }
        }

        if (x == false)
        {
            v.push_back({a, b});
        }
    }

    cout << n - con << endl;

    return 0;
}