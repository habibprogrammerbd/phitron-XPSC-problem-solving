#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + v[i] / 2;
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int s = sum + v[i] / 2 + v[j] / 2;
                ans.push_back(s);
            }
        }
        int cat = 0;
        for (int i = 0; i < (int)ans.size(); i++)
        {
            if (ans[i] > k)
                cat++;
        }
        cout << cat << endl;
    }

    return 0;
}