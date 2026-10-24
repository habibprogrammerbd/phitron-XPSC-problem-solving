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
        int ans = 0;
        int count = 0;
        int i = 1;
        while (i < n)
        {
            i = i *i;
            i++;
            count++;
        }

        cout << ans << endl;
    }

    return 0;
}