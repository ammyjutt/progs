# class Solution:
#     def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
#         m = len(s1)
#         n = len(s2)
#         dp = [[False]*(n+1) for _ in range(m+1)]

#         dp[0][0] = True

#         # 0th row 
#         for j in range(m):
#             dp[0][j+1] = dp[0][j] and s2[j] == s3[j]
#         # 0th column 
#         for i in range(n):
#             dp[i+1][0] = dp[i][0] and s1[i] == s3[i]

#         for i in range(1, m+1):
#             for j in range(1 , n+1):
#                 dp[i][j] = (s3[i+j-1] == s1[i-1] and dp[i-1][j]) or (s3[i+j-1] == s2[j-1] and dp[i][j-1])
        
#         return dp[m][n]
 