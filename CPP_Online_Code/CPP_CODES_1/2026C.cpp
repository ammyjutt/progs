//using namespace std; 
//#include <iostream>
//
//int main()
//{
//
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		string s; cin >> s;
//
//		int k = 0;
//		int zero_count = 0;
//
//		for (int i = 0; i < n; i++)
//		{		
//			if (s[i] == '1')
//			{
//				if (zero_count == 0)
//				{
//					zero_count++;
//				}
//				else
//				{
//					zero_count--;
//					k++;
//				}
//			}
//			else
//			{
//				zero_count++;
//			}
//		}
//
//		long long ans = 0; 
//		for (int i = n - 1; i >= 0; i--)
//		{
//			if (s[i] == '1' and k > 0)
//			{
//				k--; 
//			}
//			else
//			{
//				ans += (i + 1);
//			}
//		}
//		cout << ans << endl;
//	}
//
//}

