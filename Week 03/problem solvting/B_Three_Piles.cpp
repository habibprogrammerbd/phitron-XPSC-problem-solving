#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans = 0;
        if (a > b)
        {
            long long int as = abs((a + c) - b);
            ans = as;
        }
        else if (a == b)
        {
            ans = c;
        }
        else
        {
            // ans =  abs(a - b) ;
            long long int z =  abs(a - b);
            long long int as = abs((a + c) - b);
            ans = max(z,as);
        }

        cout << ans << endl;
    }

    return 0;
}