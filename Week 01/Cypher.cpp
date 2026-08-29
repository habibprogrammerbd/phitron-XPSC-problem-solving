#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        // reverse(v.begin(), v.end());
        vector<int> ans;
        for (int j = 0; j < n; j++)
        {
            int a;
            string s;
            cin >> a;
            cin >> s;

            int x = v[j];

            for (int i = 0; i < s.size(); i++)
            {

                if (s[i] == 'D')
                {
                    if (x == 9)
                        x = -1;
                    x++;
                }
                else if (s[i] == 'U')
                {

                    if (x == 0)
                        x = 10;
                    x--;
                }
            }
            ans.push_back(x);
            // cout << x ;
        }
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}