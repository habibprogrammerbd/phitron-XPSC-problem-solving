#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
        v.push_back(x);
    }
    int ans1 = 0, ans2 = 0;
    bool t = false;
    for (int i = 0; i < v.size(); i++)
    {

        int x = k - v[i];

        auto fd = mp.find(x);

        if (fd != mp.end())
        {

            if (fd->second != i)
            {
                t = true;
                ans1 = fd->second;
                ans2 = i;
                break;
            }
        }
    }

    if (t == false)
        cout << "IMPOSSIBLE\n";
    else
        cout << ans2 + 1 << " " << ans1 + 1 << endl;

    return 0;
}