#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O (আউটপুট দ্রুত ফাইলে দেখানোর জন্য)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;

    while (t--)
    {
        int n;
        cin >> n;
        stack<int> st;
        int val = 1; // সিরিয়াল ১ থেকে শুরু করলাম

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                st.push(val++); // পুশ করে val এর মান ১ বাড়বে
            }
            else if (x == 2)
            {
                if (!st.empty())
                {
                    st.pop(); // শুধু টপ থেকে উপাদান ডিলিট হবে, val কমবে না
                }
            }
        }

        // আউটপুট প্রিন্ট করার অংশ
        if (st.empty())
        {
            cout << "\n"; // স্ট্যাক খালি থাকলে শুধু একটা নতুন লাইন
        }
        else
        {
            // স্ট্যাকের উপাদানগুলো উল্টো করে প্রিন্ট করার জন্য ভেক্টর ব্যবহার
            vector<int> ans;
            while (!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
            // যেহেতু স্ট্যাক থেকে পপ করলে উল্টো আসে, তাই রিভার্স করে সোজা করা হলো
            reverse(ans.begin(), ans.end());

            for (int j = 0; j < ans.size(); j++)
            {
                cout << ans[j] << (j == ans.size() - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}
