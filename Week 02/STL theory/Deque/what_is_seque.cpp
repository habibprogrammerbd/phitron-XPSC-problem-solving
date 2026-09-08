#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_front(x);
    }

    cout << d.front();
    d.push_front(5);
    d.pop_front();
    cout << d.front();

    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }

    return 0;
}