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
        set<int> st;
        set<int> st1;
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            st.insert(v[i]);
            st1.insert(v[i]);

            if (st.size() == st1.size())
            {
                count++;
                st1.clear();
            }
        }

        cout << count << endl;
    }

    return 0;
}