#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }

        int count = 0;
        int ans = 0;
        int l = 0, r = 0;
        int f_l = 0, f_r = 0;

        for (int i = 0; i < n; i++)
        {

            if (mp.find(v[i])->second == 1)
            {
                count++;
                if (count == 1)
                {
                    l = i + 1;
                }
                r = i + 1;
                if (ans < count)
                {
                    f_l = l;
                    f_r = r;
                    ans = count;
                }
            }
            else
            {
                count = 0;
                l = 0, r = 0;
            }
        }

        if (ans == 0)
            cout << 0 << endl;
        else
            cout << f_l << " " << f_r << endl;
    }

    return 0;
}