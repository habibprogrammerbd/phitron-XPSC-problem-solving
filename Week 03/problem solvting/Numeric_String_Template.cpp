#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cin >> k;
        for (int i = 0; i < k; i++)
        {
            string s;
            cin >> s;
            map<char, int> mp;
            map<int, char> mp2;

            if (s.size() != v.size())
            {
                cout << "No\n";
            }
            else
            {
                bool xx = false;
                // bool l = true;
                for (int j = 0; j < s.size(); j++)
                {
                    auto x = mp.find(s[j]);
                    if (x != mp.end())
                    {
                        if (x->second == v[j])
                        {
                            mp[s[j]] = v[j];
                        }
                        else
                        {
                            xx = true;
                        }
                    }
                    else
                    {
                        mp[s[j]] = v[j];
                    }

                    auto zx = mp2.find(v[j]);

                    if (zx != mp2.end())
                    {
                        if (zx->second == s[j])
                        {
                            mp2[v[j]] = s[j];
                        }
                        else
                        {
                            xx = true;
                        }
                    }
                    else
                    {
                        mp2[v[j]] = s[j];
                    }
                }

                if (xx)
                {
                    cout << "No\n";
                }
                else
                {
                    cout << "Yes\n";
                }
            }
        }
    }

    return 0;
}