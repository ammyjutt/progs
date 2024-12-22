//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <cmath>
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//
//	{
//		int n; cin >> n;
//		long long k; cin >> k;
//
//		if (k > pow(2, n / 2))
//		{
//			cout << -1 << endl;
//			continue;
//		}
//
//		vector<int> v(n);
//
//		int to_place = 1;
//
//		for (int i = 0; i < n / 2; i++)
//		{
//			v[i] = to_place++;
//			v[n - 1 - i] = to_place++;
//		}
//
//		if (n % 2 == 1)
//		{
//			v[n / 2] = to_place;
//		}
//
//
//
//		function<void(int)> fun;
//
//		fun = [&](int to_increment)->void
//			{
//				if (to_increment == 0)
//					return;
//
//				int level = log2(to_increment);
//
//				int base_ix = n / 2;
//				int ix_1 = base_ix - level;
//				int ix_2 = n - 1 - ix_1;
//				swap(v[ix_1], v[ix_2]);
//				fun(to_increment - pow(2, level));
//			};
//
//
//		fun(k - 1);
//
//		for (auto& ele : v)
//		{
//			cout << ele << " ";
//		}
//
//		cout << endl;
//
//	}
//}
//
