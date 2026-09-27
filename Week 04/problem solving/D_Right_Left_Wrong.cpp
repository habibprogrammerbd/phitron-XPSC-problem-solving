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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        // vector<pair<int,string>> vp(n);

        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        // }
        set<int> st;
        st.insert

        int l = 0, r = 0;
        long long int sum = 0;
        while (r < v.size())
        {

            if (s[r] == 'R')
            {
                l = r;
                sum += v[l];
            }
            else
            {
                sum += v[l];
            }

            r++;
        }

        cout << sum << endl;
    }

    return 0;
}