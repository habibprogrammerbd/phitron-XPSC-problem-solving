#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // vector<int> left;
        // vector<int> right;
        int ans_one = 0;
        int ans_two = 0;
        for (int i = 0, j = r ; i < l -1  && j < n; i++, j++)
        {
            ans_one = ans_one + v[i];
            ans_two = ans_two + v[j];
        }
        // for (int i = 0; i < l - 1; i++)
        // {
        //     ans_one = ans_one + v[i];
        // }
        // for (int i = r; i < n; i++)
        // {
        //     ans_two = ans_two + v[i];
        // }

        cout << max(ans_one, ans_two) << endl;
        // for (int i = 0; i < n; i++)
        // // {
        // //     cout << v[i];
        // // }
    }

    return 0;
}