// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     int v[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }
//     // sort(v.begin(), v.end());
//     int x = 1;
//     int y = n;
//     int s = 0;
//     int d = 0;
//     int flag = 1;
//     while (x <= y)
//     {

//         if (flag % 2 != 0)
//         {
//             if (v[x] > v[y])
//             {
//                 s = s + v[x];
//                 x++;
//             }
//             else
//             {
//                 s = s + v[y];
//                 y--;
//             }
//         }
//         else if (flag % 2 == 0)
//         {
//             if (v[x] > v[y])
//             {
//                 d = d + v[x];
//                 x++;
//             }
//             else
//             {
//                 d = d + v[y];
//                 y--;
//             }
//         }
//         flag++;
//     }

//     cout << s << " " << d << endl;

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
    deque<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0, d = 0, flag = 1;
    while (!v.empty())
    {
        int f = v.front(), b = v.back();
        int m = max(f, b);

        if (flag % 2 != 0)
            s += m;
        else
            d += m;

        if (f == m)
            v.pop_front();
        else
            v.pop_back();

        flag++;
    }

    cout << s << " " << d << endl;

    return 0;
}