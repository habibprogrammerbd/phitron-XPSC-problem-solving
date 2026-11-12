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
        int n, k;
        map<char, int> mp;
        cin >> n >> k;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        if (n < k)
            cout << "NO\n";
        else
        {

            int count = 0;
            bool v = true;
            for (int i = 0; i < k; i++)
            {
                size_t found_pos = s1.find(s2[i]);
                if (found_pos != string::npos)
                {
                    s1.erase(found_pos, 1);
                    count++;
                }
                else
                {
                    v = false;
                    break;
                }
            }
            // sort(s1.begin(), s1.end());
            bool x = true;
            if (v && s1.size() == 3)
            {
                int l = true;
                for (int i = 0; i < 3; i++)
                {
                    mp[s1[i]]++;
                }

                int a = 1, s = 1, r = 1;

                for (auto [o, p] : mp)
                {
                    if (p >= 2)
                    {
                        l = false;
                    }
                    else if (o == 'x' && p == 1 && a == 1)
                    {
                        a = 2;
                    }
                    else if (o == 'i' && p == 1 && s == 1)
                    {
                        s = 2;
                    }
                    else if (o == 's' && p == 1 && r == 1)
                    {
                        r = 2;
                    }
                    else
                    {
                        l = false;
                    }
                }

                if (r == 2 && s == 2 && a == 2)
                {
                    l = true;
                }
                else
                {
                    l = false;
                }

                if (l)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}