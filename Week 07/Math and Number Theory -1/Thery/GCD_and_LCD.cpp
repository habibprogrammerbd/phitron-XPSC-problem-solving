#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    // gcd
    cout << __gcd(a, b) << endl; // O(log(min(a,b)))

    // lcd
    cout << (a / __gcd(a, b)) * b << endl;

    return 0;
}