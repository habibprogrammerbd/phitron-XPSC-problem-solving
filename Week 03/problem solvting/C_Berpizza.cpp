// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     set<pair<int, int>> mono;
//     multiset<pair<int, int>, greater<pair<int, int>>> polo;
//     int siral = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int num;
//         cin >> num;
//         if (num == 1)
//         {
//             int tk;
//             cin >> tk;
//             mono.insert({siral, tk});
//             polo.insert({tk, -siral});
//             siral++;
//         }
//         else if (num == 2)
//         {
//             int poss = mono.begin()->first;
//             int tk = mono.begin()->second;
//             mono.erase({poss, tk});
//             polo.erase({tk, -poss});
//             cout << poss << " ";
//         }
//         else if( num == 3)
//         {
//             int tk = polo.begin()->first;
//             int poss = -polo.begin()->second;
//             mono.erase({poss, tk});
//             polo.erase({polo.begin()});
//             cout << poss << " ";
//         }
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
   priority_queue<pair<int,int>> polo;
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mono;
//    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> polo;
    int siral = 1;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            int tk;
            cin >> tk;
            mono.push({siral, tk});
            polo.push({tk, -siral});
            siral++;
        }
        else if (num == 2)
        {
           int poss = mono.top().first;
           int tk = mono.top().second;
           mono.pop();
        }
        else if( num == 3)
        {
           
        }
    } 
    // while (!mono.empty())
    // {
    //     cout << mono.top().first << " " << mono.top().second << endl;
    //     mono.pop();
    // }
    // cout << "****************************************" << endl;
    //  while (!polo.empty())
    // {
    //     cout << polo.top().first << " " << polo.top().second << endl;
    //     polo.pop();
    // }
    

    return 0;
}