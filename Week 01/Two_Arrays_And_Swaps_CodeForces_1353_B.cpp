#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> one(n);
        vector<int> two(n);
        for (int i = 0; i < n; i++)
        {
            cin >> one[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> two[i];
        }
        sort(one.begin(), one.end());
        sort(two.begin(), two.end(), greater<int>());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            if(one[i] < two[i])
                swap(one[i], two[i]);
            else
                break;    
        }

        int sum_one = accumulate(one.begin(), one.end(), 0);
        // int sum_two = accumulate(two.begin(), two.end(), 0);

        cout << sum_one<< endl;
    }

    return 0;
}