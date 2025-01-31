//using namespace std;
//#include <iostream>
//#include <vector>
//
//const int MOD = 1e9 + 7;
// 
// // TLE
//
//int main()
//{
//	int n; cin >> n;
//	vector<int> man(n);
//	
//	for (int i = 0; i < n; i++)
//	{
//		int num = 0;
//		for (int i = 0; i <= 20; i++)
//		{
//			bool bit; cin >> bit; 
//			num |= (bit == 1 ? 1 << i : 0);
//		}
//		man[i] = num;
//	}
//
//
//	vector<int> dp_prev((1 << n), 1);
//	vector<int> dp_next((1 << n));
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int subset = 1; subset < (1 << n); subset++)
//		{
//			dp_next[subset] = 0;
//			int common = subset & man[i];
//			for (int j = 0; j <= 20; j++)
//			{
//				if (common & (1 << j))
//				{
//					dp_next[subset] = (dp_next[subset] + dp_prev[subset & ~(1 << j)])%MOD;
//				}
//			}
//		}
//		swap(dp_prev, dp_next);
//	}
//	cout << dp_prev[(1 << n) - 1] << endl;
//}
//
