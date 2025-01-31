//using namespace std; 
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int n, k; cin >> n >> k;
//	vector<int> x(n);
//
//	for (auto& ele : x)
//		cin >> ele;
//
//	vector<bool> dp(k + 1);
//	dp[0] = false;
//
//	for (int i = 1; i <= k; i++)
//	{
//		dp[i] = false;
//		
//		for (int j = 0; j < n;j++)
//		{
//			if (i >= x[j])
//			{
//				if(dp[i - x[j]] == false)
//				{
//					dp[i] = true;
//					break;
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	cout << (dp[k] == true ? "First" : "Second") << endl;
//}
//
//
//
