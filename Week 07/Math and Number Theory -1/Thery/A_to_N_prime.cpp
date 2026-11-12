#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            count++;

            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << count << '\n';

    return 0;
}