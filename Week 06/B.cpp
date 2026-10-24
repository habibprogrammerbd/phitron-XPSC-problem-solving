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
        bool even = false, odd = false;
        string s = "";
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    s+='1';
                    
                }
                else{
                    s+='0';
                }
            }
        }
        else
        {
            odd = true;
        }

        cout << s << endl;
    }

    return 0;
}