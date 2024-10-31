//using namespace std;
//#include <iostream>
//#include <vector>
//
//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//
//        int len_nums = nums.size();
//        k = k % len_nums;
//
//
//        if (k == 0 or len_nums == 1)
//            return;
//
//        int started_from = -1;
//        int i = -1; 
//        int current = nums[0];
//
//        int replacements = 0;
//
//
//
//        do {
//
//            if (started_from == i)
//            {
//                i = (i + 1) % k;
//                started_from = i;
//                current = nums[i];
//            }
//
//            int to_place_next = nums[(i + k) % len_nums];
//            nums[(i + k) % len_nums] = current;
//            current = to_place_next;
//            i = (i + k) % len_nums;
//            replacements++;
//
//        } while (replacements != len_nums);
//
//
//    }
//};