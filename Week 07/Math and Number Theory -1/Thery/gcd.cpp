#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x = INT_MIN

// int gcd(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a > b)
//             a = a % b;
//         else
//             b = b % a;
//     }

//     if (a == 0)
//         return b;
//     else
//         return a;
// }

int gcdRce(int a, int b)
{
    if (b == 0)
        return a;

    return gcdRce(b, a % b);
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << gcdRce(a, b);

    return 0;
}