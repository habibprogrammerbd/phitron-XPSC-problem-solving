#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto it = find(v.begin(), v.end(), s);
        if (it == v.end())
        {
            v.push_front(s);
        }
        else
        {
            v.erase(it + 0);
            v.push_front(s);
        }
    }

    for (auto x : v)
        cout << x << endl;

    return 0;
}