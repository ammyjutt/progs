//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//class Solution {
//public:
//    int longestSquareStreak(vector<int>& nums) {
//
//        unordered_set <double> set;
//
//        for (const auto& item : nums)
//            set.insert(item);
//
//        short int ans = INT_MIN;
//        bool does_exist_greater_than_one = false;
//
//        for (auto& item : nums)
//        {
//
//            // check smaller 
//            short int smaller = 0;
//            int item_copy = item;
//            while (sqrt(item_copy) > 1 and set.count(sqrt(item_copy))) {
//                item_copy = sqrt(item_copy);
//                smaller++;
//                does_exist_greater_than_one = true;
//            }
//
//
//            // check larger
//            short int larger = 0;
//            item_copy = item;
//            while (item_copy*item_copy < 1e5 and set.count(item_copy * item_copy)) {
//                item_copy = item_copy * item_copy;
//                larger++;
//                does_exist_greater_than_one = true;
//
//            }
//
//            ans = max(ans, short(smaller + 1 + larger));
//
//        }
//
//        if (does_exist_greater_than_one == true)
//            return ans;
//        else
//            return -1;
//    }
//};
//
//
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { 2,5 };
//    cout << s.longestSquareStreak(nums);
//}
//
//
