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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int left = 0, right = n - 1;
        int mn = 1, mx = n;
        bool found = false;

        while (left < right)
        {
            if (v[left] == mn)
            {
                left++;
                mn++;
            }
            else if (v[left] == mx)
            {
                left++;
                mx--;
            }
            else if (v[right] == mn)
            {
                right--;
                mn++;
            }
            else if (v[right] == mx)
            {
                right--;
                mx--;
            }
            else
            {
                cout << left + 1 << " " << right + 1 << '\n';
                found = true;
                break;
            }
        }

        if (found == false)
        {
            cout << -1 << '\n';
            
        }
    }
    return 0;
}
