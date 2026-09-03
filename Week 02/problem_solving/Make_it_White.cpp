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
        string s;
        cin >> s;

        int con_one = 0;
        int con_two = 0;

        for (int i = 0; i < n, s[i] != 'B'; i++)
        {
            con_one++;
        }
        for (int i = s.size() - 1; i >= 0, s[i] != 'B'; i--)
        {
            con_two++;
        }

        cout << n - (con_one + con_two) << endl;
        }

    return 0;
}