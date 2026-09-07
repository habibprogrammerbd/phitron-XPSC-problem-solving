#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // int left = 0;
    // int right = left + 10;
    bool x = true;

    // while (right < n && left < n)
    // {
    //     if (v[left] > v[right])
    //     {
    //         x = false;
    //         break;
    //     }

    //     left = right + 1;
    //     right = left + 10;
    // }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            x = false;
            break;
        }
    }

    if (x)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}