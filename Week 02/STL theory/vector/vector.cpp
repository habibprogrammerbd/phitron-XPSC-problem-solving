#include <bits/stdc++.h>
#include <print>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    {
        // // last alimuant remove korte hoile ...
        // v.pop_back(); // o(1)

        // // last alimuant a push korte hoile ..
        // v.push_back(20); // O(1)

        // // vetor ar size print korte hoile ..
        // cout << v.size() << endl; // O(1)

        // // vector ar all value remove korte caile...
        // v.clear(); // O(n)

        // // vector ar value ace ki na se ta chak korar jonno empty use kora hoy..

        // cout << boolalpha << v.empty() << endl; // O(1)
    }

    {
        // assain
        int n;
        cin >> n;
        // assain one
        // vector<int> v(n,5); // O(n)

        // assaint two
        // vector<int> v;
        // v.assign(n,  6);  // O(n)

        // resize three
        vector<int> v;
        // resize molloto akta vector ke resize kore day,,notun size kore day
        v.resize(n, 9);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    // println("{}",v);

    return 0;
}