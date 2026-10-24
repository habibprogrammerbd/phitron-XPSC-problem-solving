#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> mp;

    while (t--)
    {
        string s;
        cin >> s;

        if (mp.find(s) != mp.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            
        }
        mp[s]++;
    }

    return 0;
}