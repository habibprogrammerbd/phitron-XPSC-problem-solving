#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> m;
    // insert one.
    // m.insert({10, 20});

    // insert two..
    m[10] = 3;
    m[2] = 10;
    m[3] = 50;
    m[2] = 12;
    // cout << m[2] << endl; //// 10 hoce kay ar kay ar value hocce .. 20.. make ccabi dile ta value ta output dibe..

    // traves korar joono..amr lence bes for loop use korbo ...

    // output one...
    // for (auto [kay, val] : m)
    // {
    //     cout << kay << " -> " << val << endl;
    //     //  kay gulo sorted takbe..
    // }

    // output two...itertor diya.
    // for (auto it : m)
    // {
    //     int kay = it.first, val = it.second;
    //     cout << kay << " -> " << val << endl;
    // }

    // vallue accesssss.....
    // auto it = m.find(2);
    // cout << it->first << " -> " << it->second << endl;

    /// je kay ta kujci saita jodi amar map a na take thole amake .. jevabe handel korte hove......

    // one tacnick..
    // auto it = m.find(2); /// O(log(n))
    // if(it == m.end())
    //     cout << "arnar kay ta map a nai.(sorry key nat found)";
    // else
    //     cout << it->first << " -> " << it->second << endl;

    // tow teacnick..
    // value diya track korte pari...
    // aita jodi ami je key ar valu ta accses korte caitici ... jodi na take thole .. oi key ar amar map aa add hoy jabe....ai jono one tecnick use kora valo..

    // if (it->second == 0)
    //     cout << "arnar kay ta map a nai.(sorry key nat found)";
    // else
    //     cout << it->first << " -> " << it->second << endl;

    // erese ....................................................
    // jodi key ta amer map a take thoel ,,,,a erese kore jabe sorasori jodi ami vabi amar key ta amar map a nai (sondoho ace) tahole amake age chak kore nite hobe na hoy .... error cole asbe.....

    // auto it = m.find(2); /// O(log(n))
    // if (it == m.end())
    //     cout << "arnar kay ta map a nai.(sorry key nat found)";
    // else
    //     m.erase(2);

    // for (auto [kay, val] : m)
    // {
    //     cout << kay << " -> " << val << endl;
    //     //  kay gulo sorted takbe..
    //

    // size ........
    // cout << m.size() << endl;
    // cout << m.empty() << endl;
    // m.clear();
    // cout << m.empty() << endl;

    // auto it = m.begin();
    // it++;
    // cout << it->first << " " << it->second << endl;

    // ati functon ti ,,,,, je key ta dibo ssetar = or < big key ar iterator ta ruetun kore ......
    // auto it = m.lower_bound(2);
    // cout << it->first << " " << it->second;

    /// aita fuction ta ... ke key ta dibo tar ke ke (bolo key) ta amek runten kore dobe.....
    // auto it = m.upper_bound(2);
    // cout << it->first << " " << it->second;
    return 0;
}