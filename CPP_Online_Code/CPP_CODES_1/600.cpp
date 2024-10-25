//using namespace std;
//#include <vector>
//#include <iostream>
//
//
//
//void reverse_bits(int& n) {
//    int result = 0;
//    while (n)
//    {
//        result |= (n & 1);
//        result <<= 1;
//        n >>= 1;
//    }
//    n = (result>>1);
//}
//
//
//class Solution {
//public:
//    int findIntegers(int n) {
//
//        if (n == 1 || n == 2)
//        {
//            return n + 1;
//        }
//
//        if (n == 3)
//            return 3;
//
//        vector<int> dp;
//        dp.push_back(1);
//        dp.push_back(2);
//
//        int ix = 1;
//
//        // 5 
//        int power = 2;
//
//        while (power <= n)
//        {
//            ix++;
//            power *= 2;
//            dp.push_back(0); // make space for new
//            dp[ix] = 1 + dp[ix - 1] + dp[ix - 2];
//        }
//
//        reverse_bits(n);
//        int ans = 0;
//        int current_ix = ix-1;
//
//        bool last_bit = false;
//
//        while (n)
//        {
//            int temp = (n & 1);
//            n >>= 1;
//            
//            if(temp)
//            {
//                
//                if (current_ix == 0 || current_ix == 1)
//                {
//                    ans += current_ix + 1;
//                }
//                else {
//                    ans += 1 + dp[current_ix - 1];
//                }
//
//                // see if the left bit is on too
//                if (last_bit)
//                {
//                    
//                    return ans;
//                }
//                last_bit = true;
//            }
//            else
//            {
//                last_bit = false;
//            }
//
//            
//            current_ix -= 1;
//        }
//
//        return ans + 1;
//    }
//};
//
//
//int main()
//{
//
//    Solution s;
//
//    cout << s.findIntegers(5) << endl;
//
//
//}
//
//
//
//
//
