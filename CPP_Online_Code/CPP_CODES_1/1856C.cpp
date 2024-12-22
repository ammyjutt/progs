//using namespace std;
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//
//bool bin_search(vector<int>& v, int idx, int remaining_k, long long target)
//{
//	int n = v.size();
//	for (int i = idx; i < n; i++)
//	{
//		if (v[i] >= target)
//			return true;
//		if ((target - v[i]) > remaining_k)
//			return false;
//
//		remaining_k -= (target - v[i]);
//		target--;
//	}
//	return false;
//}
//
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//		int k; cin >> k;
//
//		vector<int> v(n);
//		for (auto& ele : v) 
//			cin >> ele;
//
//		long long mexx = v[0];
//
//		for (int i = 0; i < n-1; i++)
//		{
//
//			long long l = v[i];
//			long long r = (long long) v[i] + k;
//	
//			while (l < r)
//			{
//				long long mid = l + (r - l) / (double)2 + double(0.5);
//
//				if (bin_search(v,i,k,mid) == false)
//				{
//					r = mid - 1;
//				}
//				else
//				{
//					l = mid;
//				}
//			}
//			mexx = max(mexx, l);
//		}
//
//
//		if (mexx > v[n - 1])
//			cout << mexx << endl;
//		else
//			cout << v[n - 1] << endl;
//	}
//}
//
