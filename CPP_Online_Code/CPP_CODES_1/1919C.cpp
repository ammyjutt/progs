//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main()
//{
//	short int t;
//	cin >> t;
//
//
//	while (t--)
//	{	
//		int n;
//		cin >> n;
//
//		int a = INT_MAX;
//		int b = INT_MAX;
//				
//		int next;		
//		int ans = 0;
//
//		while (n--)
//		{
//			cin >> next; 
//			
//			if (next <= a and next <= b)
//			{
//				if (a <= b)
//				{
//					a = next;
//				}
//				else
//				{
//					b = next;
//				}
//			}
//			else if (next <= a)
//			{
//				a = next;
//			}
//			else if (next <= b)
//			{
//				b = next;
//			}
//			else
//			{
//				ans += 1;
//				if (a < b)
//				{
//					a = next;
//				}
//				else
//				{
//					b = next;
//				}
//			}
//
//		}
//
//		cout << ans << endl;
//
//	}
//}
//
//
//
//
//
//
