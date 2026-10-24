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
        int n, con = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n-1; i++)
        {
            while (n && s[n - 1] == 'A')
                n--;
            while (i < s.size() && s[con] == 'B')
                con++;
        }
        cout << max(n - con - 1, 0) << endl;
    }

    return 0;
}