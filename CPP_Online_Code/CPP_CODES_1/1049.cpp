//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//class Solution {
//public:
//    int lastStoneWeightII(vector<int>& stones) {
//        int sum = accumulate(stones.begin(), stones.end(),0);
//        int capacity = sum / 2;
//        int n = stones.size();
//        vector< vector<int>> dp(n+1, vector<int>(capacity+1, 0));
//
//        vector<int> dp_one(capacity + 1, 0);
//        vector<int> dp_two(capacity + 1);
//        dp_two[0] = 0;
//        
//
//
//        // i -> item 
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= capacity; j++)
//            {
//                if (i % 2 == 1)
//                {
//                    dp_two[j] = dp_one[j];
//                    if (j >= stones[i - 1]) 
//                    {
//                        dp_two[j] = max(dp_two[j], dp_one[j - stones[i - 1]] + stones[i - 1]);
//                    }
//                }
//                else
//                {
//                    dp_one[j] = dp_two[j];
//                    if (j >= stones[i - 1])
//                    {
//                        dp_one[j] = max(dp_one[j], dp_two[j - stones[i - 1]] + stones[i - 1]);
//                    }
//                }
//            }
//        }
//        
//        // n+1 is the current value of i 
//        if ((n + 1) % 2) {
//            return sum - 2 * dp_one[capacity];
//        }
//        else
//        {
//            return sum - 2 * dp_two[capacity];
//        }
//    }
//};
//
//
//
//
//int main()
//{
//
//}
//
//
//
//
//
//
//
