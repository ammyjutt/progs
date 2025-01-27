//using namespace std; 
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n; 
//		int i;
//
//		vector<int> v(n);
//
//		for (auto& ele : v)
//			cin >> ele;
//
//		for (i = 1; i <= n; i++)
//		{
//			int temp = v[i-1];
//			bool can_make_left = temp > (i - 1)*2;
//			bool can_make_right = temp > (n - i)*2;
//			if (!can_make_left or !can_make_right)
//				break;
//		}
//		if (i == n + 1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//}
//
