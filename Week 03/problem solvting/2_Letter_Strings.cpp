#include <bits/stdc++.h>
using namespace std;

long long int two_string(long long int n )
{
    string s;
    map<char, int> mp;
    map<char, int> mp2;
    map<string, int> same;
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        count += mp[s[0]] - same[s];
        count += mp2[s[1]] - same[s];

        mp[s[0]]++;
        mp2[s[1]]++;
        same[s]++;
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        cout << two_string(n) << endl;
    }

    return 0;
}