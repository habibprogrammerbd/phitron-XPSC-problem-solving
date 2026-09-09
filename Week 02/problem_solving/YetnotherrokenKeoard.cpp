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
//         string s;
//         cin >> s;

//         string ans = "";
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'B')
//             {
//                 auto it = find_if(ans.rbegin(),ans.rend() ,:: isupper);
//                 i++;
//             }
//             else if (s[i] == 'b')
//             {
//                 auto it = find_if(ans.rbegin(),ans.rend() ,:: islower);
//                 if(it != ans.rend())
//                 {
//                     ans.erase(it.base()-1);
//                 }
//             }
//             else
//             {
//                 ans += s[i];
//             }
//         }
//         cout << ans << endl;
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
        string s;
        cin >> s;
        deque<int> idx_oen;
        deque<int> idx_two;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && isupper(s[i]))
            {
                idx_oen.push_back(i);
            }
            else if (s[i] != 'b' && islower(s[i]))
            {
                idx_two.push_back(i);
            }
            else if (s[i] == 'b')
            {
                if (!idx_two.empty())
                {
                    idx_two.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                if (!idx_oen.empty())
                {
                    idx_oen.pop_back();
                }
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (!idx_oen.empty() && i == idx_oen.front())
            {
                cout << s[i];
                idx_oen.pop_front();
            }
            else if (!idx_two.empty() && i == idx_two.front())
            {
                cout << s[i];
                idx_two.pop_front();
            }
        }
         cout << endl;
    }

    return 0;
}