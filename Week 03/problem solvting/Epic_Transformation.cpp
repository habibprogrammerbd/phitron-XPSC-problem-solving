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
        priority_queue<int> pq_one;
        priority_queue<int, vector<int>, greater<int>> pq_two;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq_one.push(x);
            pq_two.push(x);
        }
        int sz_one = 0;
        int sz_two = 0;
        while (!pq_one.empty())
        {
            if (pq_one.top() != pq_two.top())
            {
                pq_one.pop();
                pq_two.pop();
            }
            else
            {
                sz_one++;
                sz_two++;
                pq_one.pop();
                pq_two.pop();
            }
        }
        if (n % 2 != 0)
        {
            cout << sz_one * sz_two << endl;
        }
        else
        {
            cout << sz_one << endl;
        }
    }

    return 0;
}