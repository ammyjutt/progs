//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//
//
//
//
//class Solution {
//public:
//    vector<int> minBitwiseArray(vector<int>& nums) {
//        
//        int len_nums = nums.size();        
//
//        for (int i = 0; i < len_nums; i++)
//        {
//            if (nums[i] >= 3)
//            {
//                short int ones = 0; 
//                bool bit = 1;
//
//                while(true) {
//                    bit = nums[i] & 1;
//                    if (bit == 0)
//                        break;
//                    ones += 1;
//                    nums[i] >>= 1;
//                }
//
//                // push zero 
//
//                nums[i] <<= 1;
//                ones--;
//
//                while (ones--)
//                {
//                    nums[i] <<= 1;
//                    nums[i] |= 1;
//                }
//            }
//            else
//            {
//                nums[i] = -1;
//            }
//        }
//        return nums;
//    }
//};
//
//
//
//
//int main()
//{
//    Solution s;
//
//    vector<int> v = { 2,3,5,7 };
//
//    for (auto ele : s.minBitwiseArray(v))
//    {
//        cout << ele << ' ';
//    }
//}
//
//
//
