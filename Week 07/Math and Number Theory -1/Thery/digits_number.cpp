#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n != 0)
    {
        int digits = n % 10;

        cout << digits << " ";

        n = n/10;
    }
    

    return 0;
}