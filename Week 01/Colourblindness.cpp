#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string v_one, v_two;
        cin >> v_one;
        cin >> v_two;
        bool x = true;
        for (int i = 0; i < n; i++)
        {
            if (v_one[i] == 'R' && v_two[i] != 'R')
                x = false;
            else if (v_one[i] != 'R' && v_two[i] == 'R')
                x = false;
        }
        if (x == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}