#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            for (int j = i; j < n && v[j] != 10; j++)
            {
                i = j;
            }

            count++;
        }
        else
        {
            if (v[i] == 10)
            {
                for (int j = i; j < n && v[j] != 1; j++)
                {
                    i = j;
                }
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}