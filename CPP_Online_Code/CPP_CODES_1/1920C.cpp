//#include <iostream>
//using namespace std;
//#include <vector>
//
//	
//
//int gcd(int a, int b)
//{
//	while (b)
//	{
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//		vector<int> v(n);
//		for (int i = 0; i < n; i++) cin >> v[i];
//		int ans = 0;
//
//
//		for (int group_size = 1; group_size <= n - 1; group_size++)
//		{
//			if (n % group_size == 0)
//			{
//				bool increment_ans = true;
//				int cur_gcd; 
//				bool gcd_init = false;
//
//				for (int s = 0; s < group_size; s++)
//				{
//					int next = s;
//					int prev;
//
//					while (true)
//					{
//						prev = next;
//						next += group_size;
//						if (next >= n)
//							break;
//						int diff = abs(v[next] - v[prev]);
//						if (diff != 0)
//						{
//							if (gcd_init == false)
//							{
//								cur_gcd = diff;
//								gcd_init = true;
//							}
//							else
//							{
//								cur_gcd = gcd(cur_gcd, diff);
//							}
//							if (cur_gcd == 1)
//							{
//								increment_ans = false;
//								break;
//							}
//						}
//					}
//				}
//				if (increment_ans == true)
//				{
//					ans += 1;
//				
//				}
//
//			}
//
//
//		}
//
//
//		cout << ans + 1 << endl;
//	}
//
//
//
//}
//
//
//
