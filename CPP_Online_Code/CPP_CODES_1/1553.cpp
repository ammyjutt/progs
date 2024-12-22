//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <unordered_map>
//
//
//
//
//class Solution {
//public:
//    int minDays(int n) {
//
//        function<int(int)> fun;
//
//        unordered_map<int, int> mp;
//
//        fun = [&](int n)->int
//            {
//                if (n == 0 or n == 1)
//                    return n;
//
//                if (mp.find(n) != mp.end())
//                    return mp[n];
//
//                return mp[n] = 1 + min((n % 2) + fun(n / 2), n % 3 + fun(n / 3));
//            };
//
//        return fun(n);
//    }
//};