//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//
//
//    Solution() {}
//
//
//    int k;
//
//    double fun(int l1, int r1, int l2, int r2, int offset, vector<int> nums1,vector<int> nums2)
//    {
//
//
//        // if only second array is there
//        if (r1 < l1)
//        {
//            int ix = l2 + (k - offset) - 1;
//            return nums2[ix];
//        }
//        
//        if (r2 < l2)
//        {
//            int ix = l1 + (k - offset) - 1;
//            return nums1[ix];
//        }
//
//
//
//
//        int mid = (l1 + r1) / 2;
//
//        int m = mid - l1;
//        int n = lower_bound(nums2.begin() + l2, nums2.begin()+r2+1 , nums1[mid]) - (nums2.begin()+l2);
//
//        if (m + n + offset == k - 1)
//        {
//            return nums1[mid];
//        }
//
//        if (m + n + offset  >=  k)
//        {
//            return fun(l1, mid - 1, l2, l2+ n - 1,offset, nums1, nums2);
//        }
//
//        if (m + n + offset < k)
//        {
//            return fun(mid + 1, r1, l2+n, r2, m+n+offset+1, nums1, nums2); // 1 for mid 
//        }
//
//        return -1;
//    }
//
//
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//
//        k = ceil((nums1.size() + nums2.size()) / double(2));
//        
//
//        int len_nums1 = nums1.size();
//        int len_nums2 = nums2.size();
//        
//        double ans = fun(0, len_nums1 - 1, 0, len_nums2-1, 0, nums1,nums2);   
//
//
//        if ((len_nums1 + len_nums2) % 2 == 0)
//        {
//            k += 1;
//            double ans2 = fun(0, len_nums1 - 1, 0, len_nums2 - 1, 0, nums1, nums2);
//            ans = double(ans+ans2)/2;
//        }
//        return ans;
//    }
//};
//
//
//
//
//
//
//
//int main()
//{
//    Solution s; 
//
//    vector<int> nums1 = { 2,3,4,6,7,8 };
//    vector<int> nums2 = { 1,5 };
//
//    cout << s.findMedianSortedArrays(nums1, nums2);
//}
//
//
