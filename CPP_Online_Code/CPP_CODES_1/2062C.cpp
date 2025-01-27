//using namespace std;
//#include <iostream>
//#include <vector>
//#include <climits>
//
//
//int main()
//{
//
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n;
//		vector<long long> v(n);
//		long long ans = 0; 
//		for (auto& i : v)
//		{
//			cin >> i;
//			ans += i;
//		}
//
//		while (n >= 2)
//		{
//			long long summ = 0;
//			for (int i = 0; i < n - 1; i++)
//			{
//				v[i] -= v[i + 1];
//				summ += v[i];
//			}
//			ans = max(ans, summ);
//			ans = max(ans, -summ);
//			n--;
//		}
//
//		cout << ans << endl;
//		
//
//	}
//}
