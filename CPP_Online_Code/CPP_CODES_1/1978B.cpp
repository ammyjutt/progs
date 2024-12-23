//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//
//int main()
//{
//
//	int t; cin >> t; 
//	while (t--)
//	{
//		long long n, a, b; cin >> n >> a >> b;
//
//		auto is_greater_equal = [&](int ix)->bool
//			{
//				return (b - ix+1) >= a; 
//			};
//
//		int l = 1; int r = min(n+1, b);
//		while (l < r)
//		{
//			int mid = l + (r - l) / 2;
//			if (is_greater_equal(mid) == true)
//			{
//				l = mid + 1; 
//			}
//			else
//			{
//				r = mid;
//			}
//		}
//
//		if (l == 1)
//		{
//			cout << n * a << endl;
//		}
//		else
//		{
//			long long total = b * (b + 1) / 2;
//			long long to_sub = (b - l + 1) * (b - l + 2) / 2;
//			cout << total - to_sub + (a*(n-l+1)) << endl;
//		}
//	}
//}
