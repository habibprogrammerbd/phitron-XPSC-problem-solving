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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else
            {
                zero++;
            }
        }

        if (count >= 1 && zero > 0 )
        {
            cout << count + min(zero,k) << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}