#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() % 2 != 0)
        {
            string s1 = "", s2 = "";

            int z = s.size() / 2;
            for (int i = 0; i < z; i++)
            {
                s1 += s[i];
            }
            for (int i = z + 1; i < s.size(); i++)
            {
                s2 += s[i];
            }
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if (s1 == s2)
                cout << "YES\n";
            else
                cout << "NO\n";
            // cout << s1 << " " << s2 << endl;
        }
        else
        {
            string s1 = "", s2 = "";

            int z = s.size() / 2;
            for (int i = 0; i < z; i++)
            {
                s1 += s[i];
            }
            for (int i = z; i < s.size(); i++)
            {
                s2 += s[i];
            }
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if (s1 == s2)
                cout << "YES\n";
            else
                cout << "NO\n";

            // cout << s1 << " " << s2 << endl;
        }
    }

    return 0;
}