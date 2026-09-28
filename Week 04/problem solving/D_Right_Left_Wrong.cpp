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
        vector<long long int> v(n);
        vector<long long int> pre(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        pre[0] = v[0];

        for (int i = 1; i < v.size(); i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }

        string s;
        cin >> s;

        int left = 0, right = s.size() - 1;
        long long int sum = 0;

        while (left < right)
        {
            if (s[left] == 'L' && s[right] == 'R')
            {
                if (left == 0)
                {
                    sum += pre[right];
                }
                else
                {
                    sum += (pre[right] - pre[left - 1]);
                }
                left++, right--;
            }
            else if (s[left] == 'R')
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        // for (auto x : pre)
        //     cout << x << " ";

        cout << sum << endl;
    }

    return 0;
}