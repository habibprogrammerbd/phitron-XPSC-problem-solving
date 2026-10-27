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
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int count = 0, i = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (s1[i - 1] == 'x' && s1[i + 1] == 'x' && s1[i] == '.' && s2[i] == '.' && s2[i - 1] == '.' && s2[i + 1] == '.')
                count++;
            else if (s1[i + 1] == '.' && s1[i - 1] == '.' && s1[i] == '.' && s2[i - 1] == 'x' && s2[i + 1] == 'x' && s2[i] == '.')
                count++;

        }


        cout << count << '\n';
    }

    return 0;
}