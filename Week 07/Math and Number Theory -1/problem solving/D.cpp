#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int a = 0, b = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                a++;
            else if (s[i] == '0' && s[i + 1] == '1')
                b++;
        }
        if (a == 0 || b == 0)
            cout << "Bob\n";

        else
            cout << "Alice\n";
    }

    return 0;
}