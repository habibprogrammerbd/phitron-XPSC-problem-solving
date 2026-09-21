#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // akne sobkicu nested akare take.....
    map<int, set<int>> ms;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int key, set_number;
        cin >> key;
        cin >> set_number;
        for (int i = 0; i < set_number; i++)
        {
            int x;
            cin >> x;
            ms[key].insert(x);
        }
    }

    auto LB1 = ms.lower_bound(6);
    if (LB1 == ms.end())
    {
        cout << "NOT found\n";
    }
    else
    {
        auto ans = LB1->first;
        auto LB2 = ms[ans].lower_bound(100);
        if (LB2 == ms[ans].end())
        {
            cout << "NOT found\n";
        }
        else
        {
            cout << *LB2 << endl;
        }
    }

    // for (auto [x, y] : ms)
    // {
    //     cout << x << " key - > ";
    //     for (auto v : y)
    //     {
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}