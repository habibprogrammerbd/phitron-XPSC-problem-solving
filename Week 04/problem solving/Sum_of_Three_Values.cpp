#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x] = i + 1;
    }

    int x = 0, a1 = 0, a2 = 0, a3 = 0;
    bool t = false;
    for (int i = 0; i < (int)v.size(); i++)
    {
        for (int j = 0; j < (int)v.size(); j++)
        {
            x = k - v[j] - v[i];
            auto val = mp.find(x);
            if (val != mp.end())
            {
                a3 = val->second;
                if (i != j && a3 != j+1 && a3 != i+1)
                {
                    t = true;
                    cout << i+1 << " " << j+1 << " " << a3 << endl;
                    return 0;
                }
            }
        }
    }

    if (!t)
    {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}