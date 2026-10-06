#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long int> v(n);
    map<long long int, long long int> mp;
    vector<long long int> pre(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pre[0] = v[0];
    for (int i = 1; i < (int)v.size(); i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    long long int cou = 0;

    for (int i = 0; i < (int)v.size(); i++)
    {
        if (pre[i] == k)
        {
            cou++;
        }

        long long int x = pre[i] - k;

        if (mp.find(x) != mp.end())
        {
            cou += mp.find(x)->second;
        }

        mp[pre[i]]++;
    }

    for (auto x : pre)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto [x, y] : mp)
    {
        cout << x << "------>" << y << " " << endl;
    }
    // cout << cou << endl;
    return 0;
}

// // #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, x;
//     cin >> n >> x;
//     int res = 0;
//     vector<long long> nums(n), prefix(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     map<long long, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             prefix[0] = nums[0];
//         }
//         else
//         {
//             prefix[i] = prefix[i - 1] + nums[i];
//         }

//         mp[prefix[i] - x] = prefix[i];
//     }
//     for (int i = 0; i < n; i++)
//     {

//         if (mp.find(nums[i]) != mp.end() || prefix[i] == x)
//         {
//             res++;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }
