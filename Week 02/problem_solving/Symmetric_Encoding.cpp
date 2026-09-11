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
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st;
        vector<char> v;
        map<char, char> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.count(s[i]) == 0)
            {
                st.insert(s[i]);
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        vector<char> v2 = v;
        reverse(v2.begin(), v2.end());
        for (int i = 0; i < v2.size(); i++)
        {
            mp[v[i]] = v2[i];
        }

        // vector<char> ans;
        for (size_t i = 0; i < s.size(); i++)
        {
            auto it = mp.find(s[i]);

            cout << it->second;
        }
        cout << endl;

        // for (auto x : ans)
        //     cout << x;
        // cout << endl;
    }

    return 0;
}