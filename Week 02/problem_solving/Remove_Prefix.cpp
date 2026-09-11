// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         map<int, int> mp;
//         bool opp = false;

//         for (int i = n-1; i >= 0; i--)
//         {
//             int x;
//             cin >> x;

//             auto it = mp.find(x);

//             if (it == mp.end())
//             {
//                 if (opp == false)
//                 {
//                     mp[x]++;
//                 }
//                 else
//                 {
//                     v.push_back(x);
//                 }
//             }
//             else
//             {
//                 opp = true;
//                 v.push_back(x);
//             }
//         }
//         cout << v.size() << endl;
//     }

//     return 0;
// }

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
        set<int> st;
        int idx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]) == 0)
            {
                st.insert(v[i]);
            }
            else
            {
                idx = i + 1;
                break;
            }
        }

        cout << idx << endl;
    }

    return 0;
}