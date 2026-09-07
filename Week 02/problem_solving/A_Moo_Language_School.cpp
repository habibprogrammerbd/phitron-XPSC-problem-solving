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
        int x = k;
        int y = n / k;

        int ze = 0;
        int one = 0;

        for (int i = 0; i < s.size(); i = i + x)
        {
            bool q = false;
            string sub = s.substr(i, x);
            for (int j = 0; j < sub.size(); j++)
            {
                if (sub[j] == '0')
                {
                    q = true;
                    break;
                }
            }
            if (q == true)
            {
                ze++;
            }
        }

        cout << y - ze << endl;
    }

    return 0;
}