//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//
//
//class Solution {
//public:
//
//    int longestIncreasingPath(vector<vector<int>>& matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//
//        vector<vector<int>> dp(m, vector<int>(n, -1));
//        int dir[] = { -1,0,1,0,-1 };
//        int ans = 0;
//
//
//        std::function<void(int, int)> dfs; 
//
//
//        dfs = [&](int i, int j) -> void {
//
//            if (i < 0 or i == m or j < 0 or j == n)
//            {
//                return;
//            }
//
//            if (dp[i][j] == -1)
//            {
//                dp[i][j] = 1;
//                for (int d = 0; d < 4; d++)
//                {
//                    int nbr_i = i + dir[d];
//                    int nbr_j = j + dir[d + 1];
//
//
//                    if (nbr_i >= 0 and nbr_i < m and nbr_j >= 0 and nbr_j < n)
//                    {
//
//                        if (matrix[nbr_i][nbr_j] > matrix[i][j])
//                        {
//                            if (dp[nbr_i][nbr_j] == -1)
//                            {
//                                dfs(nbr_i, nbr_j);
//                            }
//                            dp[i][j] = max(dp[i][j], 1 + dp[nbr_i][nbr_j]);
//                        }
//                    }
//
//                }
//            }
//            };
//
//
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (dp[i][j] == -1)
//                {                     
//                    dfs(i, j);
//                }
//                ans = max(ans, dp[i][j]);
//            }
//        }
//
//        return ans;
//    }
//};
//
//
//int main()
//{
//    cout << "yes";
//}
//
//
