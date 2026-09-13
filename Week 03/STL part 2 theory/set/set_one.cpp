// set ar 2 ta boisisto aceeeee.......
// 1 valu gulo soted take ...
// 2 unick vallu take kono dublicat valu take na....
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x); // vetor ar push_back ar moto aikane ....insert() name use kore....O(log(n));
    }

    // cout << se.count(3) << endl; // set a oi valu ta ace ki na .. seta dake ... jodi take thole  1 retun jore jaodi na take thole 0 retun kore.. O(log(n));

    // (auto it = se.begin() +2) /// ai rokom kore jay na...error diy

    // auto it = se.begin();
    // it++;
    // cout << *it << endl;

    // valu kuja
    // auto it = se.find(78); // O(log(N));
    // if (it == se.end())
    // {
    //     cout << "END\n";
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    // value delete
    // auto it = se.find(5);
    // if (it == se.end())
    // {
    //     cout << "NOT value\n";
    // }
    // else
    // {
    //     se.erase(5); /// value remove ba delete kora O(log(N));
    // }

    // for(auto x : se)
    // {
    //     cout  << x << " ";
    // }
    // cout << endl;

    // auto it = se.lower_bound(1) ;//--------> O(log(N)) // এই ফাংশনের কাজ হলো—কোনো ভ্যালু `set`-এ থাকলে সেই ভ্যালুটাই রিটার্ন করবে। আর ভ্যালুটি `set`-এ না থাকলে, তার চেয়ে বড় সবচেয়ে কাছের ভ্যালুটি রিটার্ন করবে। অর্থাৎ, **আমার দেওয়া ভ্যালু `<=` `set`-এর ভ্যালু হতে হবে।**

    // cout << *it << endl;

    // auto it = se.upper_bound(5); // --------> O(long(N)) // কোনো ভ্যালু `set`-এ থাকলেও সেই ভ্যালুটি রিটার্ন করবে না। বরং আমার দেওয়া ভ্যালুর **চেয়ে বড়** সবচেয়ে কাছের ভ্যালুটি রিটার্ন করবে।

    // অর্থাৎ, **আমার দেওয়া ভ্যালু `<` `set`-এর ভ্যালু হতে হবে।**

    cout << *it << endl;
    return 0;
}