// ..maltiset ar 2 ta boisisto ace seta hoce ...
// 1...... maltiset ar valu guli soted takbe sobsomay .
// 2...... dublicat vallu gulo aikane take....





// sudu (delete , erase) and count function ta alada..
// baki sob sicu set ar moto..

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x); // vetor ar push_back ar moto aikane ....insert() name use kore....O(log(n));
    }

    // cout << se.count(1) << endl; // aita cout time complaxyti O(log(N+K) k -----> k ta hoce .je valu ta amra dicbo sai valu koy ta .... 5 ta hole O(log(N+5));
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

    // multiset ar somay valu delete korar somay ar time complaxcaty daray .... O(log(N+K)); amra jokon valu erase functon diya valu delete korbo tokon akta somasa daray .. je valu ta delete korbo... multiset a taka sokol value delete hoy jay... 4 ta take 4,6 ta takle 6 ta vlaue delete hoy jable ,......ar jono amader oi point ter ta delete korte hobe....

    // auto it = se.find(5);
    // if (it == se.end())
    // {
    //     cout << "NOT value\n";
    // }
    // else
    // {
    //     se.erase(it); /// value remove ba delete kora O(log(N));
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

    // cout << *it << endl;
    // for (auto x : se)
    //     cout << x << " ";
    return 0;
}