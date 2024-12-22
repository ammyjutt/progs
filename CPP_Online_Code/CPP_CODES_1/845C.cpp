//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//#define end_time second
//#define start_time first
//
//
//
//bool cmp(const pair<int, int>& a, const pair<int, int>& b)
//{
//	return a.start_time < b.start_time;
//}
//
//
//int main()
//{
//	int n; cin >> n;
//	vector<pair<int, int>> v(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].start_time >> v[i].end_time;
//	}
//	sort(v.begin(), v.end(), cmp);
//
//	if (n > 2)
//	{
//		pair<int, int> tv_one = v[0];
//		pair<int, int> tv_two = v[1];
//
//		for (int i = 2; i < n; i++)
//		{
//			if (v[i].start_time <= min(tv_one.end_time, tv_two.end_time))
//			{
//				cout << "NO" << endl;
//				return 0;
//			}
//
//			if (tv_one.end_time < tv_two.end_time)
//			{
//				tv_one = v[i];
//			}
//			else
//			{
//				tv_two = v[i];
//			}
//
//		}
//
//	}
//	cout << "YES" << endl;
//}
//
//
//

