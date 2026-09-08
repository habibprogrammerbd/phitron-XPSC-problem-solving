#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int a, b;
    // cin >> a >> b;
    // vector<vector<int>> v(a, vector<int>(b));
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < b; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // daynamic a...............
    // int a;
    // cin >> a;
    // vector<vector<int>> v;

    // for (int i = 0; i < a; i++)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> v1(n);
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> v1[j];
    //     }
    //     v.push_back(v1);
    // }

    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector string.........
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}