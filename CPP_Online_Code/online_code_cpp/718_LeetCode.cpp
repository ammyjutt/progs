//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//
//class Solution {
//public:
//    int findLength(vector<int>& nums1, vector<int>& nums2)
//    {
//
//        int ans = 0;
//
//        for (int i = 0; i < nums1.size(); i++)
//        {
//            for (int j = 0; j < nums2.size(); j++)
//            {
//
//                int cur = 0;
//                int save_i = i;
//                int save_j = j;
//                while (j < nums2.size() and i < nums1.size())
//                {
//                    if (nums1[i] != nums2[j])
//                    {
//                        break;
//                    }
//                    cur++;
//                    i++;
//                    j++;
//                }
//
//                ans = max(cur, ans);
//                i = save_i;
//                j = save_j;
//            }
//        }
//        return ans;
//    }
//};
//
//
