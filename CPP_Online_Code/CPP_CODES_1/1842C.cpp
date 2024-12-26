//using namespace std;
//#include <iostream>
//#include <vector> 
//#include <unordered_map> 
//
//
//int main()
//{
//	int t; cin >> t; 
//
//
//	while (t--)
//	{
//		int n; cin >> n; 
//
//		vector<int> dp(n + 1);
//		dp[0] = 0; 
//
//
//		unordered_map<int, int> mp;
//
//		for (int i = 1; i <= n; i++)
//		{
//			dp[i] = dp[i - 1]+1; 
//			int temp; cin >> temp; 
//			if (mp.find(temp) == mp.end())
//			{
//				mp[temp] = i;
//			}
//			else
//			{
//				int j = mp[temp];
//				dp[i] = min(dp[i], dp[j - 1]);
//				if (dp[i - 1] < dp[j - 1])
//				{
//					mp[temp] = i;
//				}
//			}
//		}
//		cout << n-dp[n] << endl;
//	}
//}
//
//
//
