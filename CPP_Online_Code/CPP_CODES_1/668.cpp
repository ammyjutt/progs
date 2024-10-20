//
//
//
//class Solution {
//public:
//
//    int findKthNumber(int m, int n, int k) {
//
//
//        int left = 1;
//        int right = m * n;
//
//        auto numbers_less_than_equal_to = [&](int current) -> int
//            {
//
//                int end = min(n, current);
//
//                int count = 0;
//                for (int i = 1; i <= end; i++)
//                {
//                    count += min(m, current / i);
//                }
//                return count;
//            };
//
//        while (left < right)
//        {
//            int mid = left + (right - left) / 2;
//
//            if (numbers_less_than_equal_to(mid) < k)
//                left = mid + 1;
//            else
//                right = mid;
//        }
//
//
//        return left;
//    }
//};