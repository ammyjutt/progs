//using namespace std;
//
//#include <vector>
//#include <iostream>
//
//
//class Solution {
//public:
//    long long fun(long long dividend, long long divisor, bool is_negative) {
//        if (dividend < divisor)
//            return 0;
//
//        long long prev_k = 1;
//        long long prev_num = divisor;
//
//        long long current_k = 2;
//        long long current_num = divisor + divisor;
//
//        while (current_num < dividend)
//        {
//            prev_num = current_num;
//            prev_k = current_k;
//
//            if (prev_k > (long long) INT_MAX + int(is_negative))
//                return (long long)INT_MAX + int(is_negative);
//
//            current_num = current_num + current_num;
//            current_k = current_k + current_k;
//        }
//        long long ans = prev_k + divide(dividend - prev_num, divisor);
//
//        if (ans > (long long)INT_MAX + int(is_negative))
//            return INT_MAX + int(is_negative);
//        else
//            return ans;
//    }
//
//
//    int divide(int dividend, int divisor) {
//
//        long long abs_dividend = abs((long long)dividend);
//        long long abs_divisor = abs((long long)divisor);
//
//
//
//        if ((dividend >= 0 and divisor > 0) or ((dividend < 0) and (divisor < 0)))
//        {
//            return fun(abs_dividend, abs_divisor, false);
//        }
//
//        return -fun(abs_dividend, abs_divisor, true);
//    }
//
//};
//
//
//
//
//
//int main()
//{
//    Solution s;
//    cout << s.divide(-2147483648, -1);
//}
//
//
//
//
//
