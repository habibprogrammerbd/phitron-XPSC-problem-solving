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
        stack<int> st;
        vector<int> ans;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                st.push(i + 1);
            }
            else if (s[i] == '2')
            {
                if (!st.empty())
                {
                    ans.push_back(i + 1);
                    st.pop();
                }
            }
        }

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        cout << ans.size() << endl;
        sort(ans.begin(), ans.end());

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
        // cout << s << endl;
    }

    return 0;
}