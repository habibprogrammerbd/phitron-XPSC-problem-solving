#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    map<string, string>  mmp;
    // map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        string z = y += ";";
        mmp[z] = x;
    }

    for (int i = 0; i < k; i++) 
    {
        string x, y;
        cin >> x >> y;

        auto it = mmp.find(y);

        cout << x << " " << y << " " << "#" << it->second << endl;
    }

    // for (auto [x, y] : mmp)
    //     cout << x << " " << y << endl;
}