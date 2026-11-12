#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// ডুপ্লিকেট ভ্যালু রাখার জন্য less_equal<int> ব্যবহার করা হয়েছে
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

int main()
{
    vector<int> a = {5, 2, 6, 2, 3};
    int n = a.size();
    ordered_multiset s;

    // বাম পাশ থেকে ডান দিকে লুপ চালানো হচ্ছে (0 থেকে n-1)
    for (int i = 0; i < n; i++)
    {
        // বাম পাশে থাকা মোট সংখ্যা থেকে a[i] এর সমান বা ছোট সংখ্যা বিয়োগ
        int greater_on_left = s.size() - s.order_of_key(a[i] + 1);

        cout << a[i] << " er bam pashe boro value ase: " << greater_on_left << " ti\n";

        // বর্তমান ভ্যালুটি সেটে ইনসার্ট করা
        s.insert(a[i]);
    }

    return 0;
}
