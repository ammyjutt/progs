//using namespace std; 
//#include <iostream>
//#include <string>
//#include <vector>
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		string s1, s2, s3; 
//		cin >> s1 >> s2 >> s3; 
//
//
//		int len_1 = s1.length(); 
//		int len_2 = s2.length(); 
//		int len_3 = s3.length(); 
//
//
//		vector<int> dp(len_2 + 1);
//
//		dp[0] = 0; 
//
//
//		for (int i = 0; i <= len_1; i++)
//		{
//			for (int j = 0; j <= len_2; j++)
//			{
//				if (i == 0 and j == 0)
//					continue;
//
//				char cur = s3[i+j-1];
//
//				if (i > 0 and j > 0 and (cur != s1[i - 1] and cur != s2[j - 1]))
//				{
//					dp[j] = min(dp[j], dp[j - 1]) + 1;
//				}
//				else if (i == 0)
//				{
//					dp[j] = dp[j - 1] + (cur == s2[j - 1] ? 0 : 1);
//				}
//				else if (j == 0)
//				{
//					dp[j] = dp[j] + (cur == s1[i - 1] ? 0 : 1);
//				}
//				else
//				{
//					int op1 = dp[j] + (cur == s1[i - 1] ? 0 : 1);
//					int op2 = dp[j - 1] + (cur == s2[j - 1] ? 0 : 1);
//					dp[j] = min(op1, op2);
//				}				
//			}
//		}
//		cout << dp[len_2] << endl;
//	}
//}
//
//
//
//
