//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//
//
//long long fun(vector<int>& v)
//{
//
//	int len_v = v.size();
//
//	if (len_v == 1)
//		return 1; 
//
//	if (len_v == 2)
//	{
//		return v[1] - v[0] + 1;
//	}
//
//	int mid_idx = (len_v-1) / 2;
//	int mid = v[mid_idx];
//	if (len_v & 1)
//	{
//		return 1;
//	}
//
//	if (v[mid_idx + 1] != v[mid_idx])
//	{
//		return v[mid_idx + 1] - v[mid_idx] + 1;
//	}
//	return 1; 
//}
//
//
//
//int main()
//{
//
//
//	short int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		vector<int> x(n);
//		vector<int> y(n);
//
//		for (int i = 0; i < n; i++)
//			cin >> x[i] >> y[i]; 
//
//
//
//		sort(x.begin(), x.end());
//		sort(y.begin(), y.end());
//
//
//		cout  <<  (long long)fun(x) * fun(y) << endl;
//
//
//	}
//}
//
//
