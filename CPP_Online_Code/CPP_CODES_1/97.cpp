//using namespace std; 
//#include <iostream>
//#include <vector>
//
//class Solution {
//public:
//    bool isInterleave(string s1, string s2, string s3) {
//
//        int len_1 = s1.length();
//        int len_2 = s2.length(); 
//
//        if (len_1 + len_2 != s3.length())
//            return false; 
//
//
//        vector<bool> dp(len_2 + 1,false);
//        dp[0] = true;
//
//        for (int i = 0; i <= len_1; i++)
//        {
//            for (int j = 0; j <= len_2; j++)
//            {
//                int s_idx = i + j - 1; 
//                
//                if (i == 0 and j == 0)
//                    continue;
//
//                if (i > 0 and ((s3[s_idx] != s1[i - 1]) or ((s3[s_idx] == s1[i - 1]) and dp[j] == false)))
//                    dp[j] = false;
//                
//                if (j > 0 and (s3[s_idx] == s2[j - 1] and dp[j - 1] == true))
//                    dp[j] = true;
//                
//            }
//        }
//        return dp[len_2];
//    }
//};