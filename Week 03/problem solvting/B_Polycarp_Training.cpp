// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     priority_queue<int, vector<int>, greater<int>> pq;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         pq.push(x);
//     }
//     int count = 0;
//     int idx = 1;
//     while (!pq.empty())
//     {
//         if (pq.top() >= idx)
//         {
//             count++;
//             pq.pop();
//             idx++;
//         }
//         else
//         {
//             pq.pop();
//         }
//     }
//     cout << count << endl;

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
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    int day = 0, problem = 1;
    while (!st.empty())
    {
        auto lb = st.lower_bound(problem);
        if (lb != st.end())
        {
            day++;
            st.erase(lb);
        }
        else
        {
            break;
        }
        problem++;
    }

    cout << day << endl;

    return 0;
}