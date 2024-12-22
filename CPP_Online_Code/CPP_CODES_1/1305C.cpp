//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	int n; cin >> n; 
//	int MOD; cin >> MOD;
//
//	vector<int> v(n);
//	for (auto& i : v) cin >> i;
//
//	if (n > MOD)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		long long ans = 1; 
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = i + 1; j < n; j++)
//			{
//				ans = (ans * (abs(v[i] - v[j]) % MOD)) % MOD;
//			}
//		}
//		cout << ans << endl;
//	}
//}