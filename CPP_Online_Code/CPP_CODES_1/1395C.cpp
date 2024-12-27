//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//
//
//int main()
//{
//	int n, m; cin >> n >> m; 
//
//	vector<int> a(n + 1);
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//
//	vector<int> b(m + 1);
//
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> b[i];
//	}
//
//	int ans;
//	for (ans = 0; ans <= 512; ans++)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= m; j++)
//			{
//				if ((~ans & (a[i] & b[j])) == false)
//				{
//					break;
//				}
//			}
//			if (j == m + 1)
//			{
//				break;
//			}
//		}
//
//		if (i == n + 1)
//		{
//			break;
//		}
//	}
//
//	cout << ans << endl;
//	
//}
