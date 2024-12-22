//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//#define left second
//#define right first
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
//
//
//		vector<pair<int, int>> v(n);
//
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i].right >> v[i].left;
//		}
//
//
//		auto fun = [&](int x)->bool
//			{
//				int i = 0; 
//				for (int p = 0; p < n; p++)
//				{
//					if(v[p].left >= i and v[p].right >= x-1-i)
//					{
//						i++;
//						if (i == x)
//							return true;
//					}
//
//				}
//				return false;
//			};
//
//
//
//		int l = 1;
//		int r = n;
//
//		while (l < r)
//		{
//			int mid = l + (r - l +1) / 2;
//			if (fun(mid) == false)
//				r = mid - 1;
//			else
//				l = mid;
//		}
//
//		cout << r << endl;
//	}
//}
//
//
//
