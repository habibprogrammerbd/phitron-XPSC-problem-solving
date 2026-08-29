#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    long long int k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;

        for (int j = max(i - m + 1, 0); j < i; j++)
        {
            sum = sum + ans[j];
        }

        sum = sum + v[i];

        if (sum <= k)
        {
            cout << "Yes\n";

            ans.push_back(v[i]);
        }
        else
        {
            cout << "No\n";

            ans.push_back(0);
        }
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m, k;
//     cin >> n >> m >> k;
    
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
    
//     vector<int> ans;
//     long long current_window_sum = 0; // m সাইজের উইন্ডোর যোগফল রাখার জন্য

//     for (int i = 0; i < n; i++)
//     {
//         // ১. যখন উইন্ডো m সাইজ পার হয়ে যাবে, তখন সবচেয়ে বামের উপাদানটি বাদ দিতে হবে
//         if (i >= m)
//         {
//             current_window_sum -= ans[i - m];
//         }

//         // ২. বর্তমান উইন্ডোর যোগফল k এর সমান বা ছোট কিনা পরীক্ষা করা
//         if (current_window_sum <= k)
//         {
//             cout << "YES\n";
//             ans.push_back(v[i]);
//             current_window_sum += v[i]; // উইন্ডোতে নতুন মান যোগ হলো
//         }
//         else
//         {
//             cout << "NO\n";
//             ans.push_back(0);
//             current_window_sum += 0; // উইন্ডোতে ০ যোগ হলো (এটি না লিখলেও চলে)
//         }
//     }

//     return 0;
// }
