//using namespace std;
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int t; cin >> t; 
//
//	vector<vector<long long>> dp(4046, vector<long long>(4046));
//	dp[0][0] = 1; 
//	long long count = 2;
//	for (int i = 1; i < 2023; i++)
//	{
//		int row_size = i + 1;
//
//		int cur_i = i;
//		int cur_j = 0; 
//
//		while (row_size)
//		{
//			dp[cur_i][cur_j] = count * count;
//			count++;
//
//			if (cur_i > 0)
//			{
//				dp[cur_i][cur_j] += dp[cur_i - 1][cur_j];
//			}
//			if (cur_j > 0)
//			{
//				dp[cur_i][cur_j] += dp[cur_i][cur_j - 1];
//			}
//			if (cur_i > 0 and cur_j > 0)
//			{
//				dp[cur_i][cur_j] -= dp[cur_i - 1][cur_j - 1];
//			}
//			row_size--;
//			cur_j += 1; // right 
//			cur_i -= 1; // up
//		}
//
//	}
//
//
//	while (t--)
//	{
//		int n; cin >> n;
//		int start = 1; 
//		int row_size = 1;
//
//		while (!(n >= start and n <= (start + row_size - 1)))
//		{
//			start += row_size;
//			row_size++;
//		}
//
//		
//		int i = row_size - 1;
//		
//		int steps_to_take = n - start;
//
//		int j = 0; 
//
//		while (steps_to_take)
//		{
//			i -= 1;
//			j += 1;
//			steps_to_take--;
//		}
//		cout  << dp[i][j] << endl;
//	}
//}
//
//
