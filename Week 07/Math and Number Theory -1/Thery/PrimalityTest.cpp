#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << boolalpha << isPrime(n) << endl;

    return 0;
}