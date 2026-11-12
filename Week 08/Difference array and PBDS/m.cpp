#include <iostream>
#include <vector>
#include <algorithm> // std::count_if এর জন্য

using namespace std;

int main()
{
    // একটি আন-সর্টেড ভেক্টর
    vector<int> v = {5, 1, 4, 3, 2, 1, 3, 8};

    int target1 = 1;
    int target2 = 3;

    // count_if এর মাধ্যমে শর্ত দিয়ে উপাদান সংখ্যা বের করা
    int count1 = count_if(v.begin(), v.end(), [target1](int x)
                          { return x >= target1; });
    // int count3 = count_if(v.begin(), v.end(), [target3](int x) { return x >= target3; });

    cout << "1 এর সমান বা বড় ভ্যালু আছে: " << count1 << " টি" << endl;
    // cout << "3 এর সমান বা বড় ভ্যালু আছে: " << count3 << " টি" << endl;
    int count = count_if(v.begin(), v.end(), [target2](int x){ return x >= target2; });
    cout << count;

    return 0;
}
