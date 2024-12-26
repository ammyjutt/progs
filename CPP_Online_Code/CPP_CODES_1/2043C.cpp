//using namespace std; 
//#include <iostream>
//#include <vector>
//
//
//int IX = -1;
//
//
//long long kadane(vector<int>& v, int mul)
//{
//	int len_v = v.size();
//
//
//	long long ans = 0; 
//
//	int l = 0; 
//	int r = 0; 
//
//	long long summ = 0; 
//
//	while (r < len_v)
//	{
//		if (abs(v[r]) != 1)
//		{
//			IX = r;
//			l = r = r + 1;
//			summ = 0;
//		}
//		else
//		{
//			summ += mul*(v[r]);
//			if (summ <= 0)
//			{
//				l = r = r + 1;
//				summ = 0;
//			}
//			else 
//			{
//				r++;
//				if (summ > ans)
//				{
//					ans = summ;
//				}
//			}
//		}
//	}
//	return mul * ans;
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
//		IX = -1;
//		vector<int> v(n);
//
//		for (auto& i : v) cin >> i;
//
//		long long right_without = kadane(v,1);
//		long long left_without = kadane(v, -1);
//
//		if (IX == -1)
//		{
//			cout << right_without - left_without + 1 << endl;
//
//			for (int i = left_without; i <= right_without; i++)
//				cout << i << " ";
//			cout << endl;
//			continue;
//		}
//
//
//
//
//		long long left_minn = 0; 
//		long long left_maxx = 0; 
//
//		long long summ = 0; 
//
//		for (int i = IX-1; i >= 0; i--)
//		{
//			summ += v[i];
//			left_minn = min(left_minn, summ);
//			left_maxx = max(left_maxx, summ);
//		}
//
//
//		summ = 0;
//
//		long long right_minn = 0; 
//		long long right_maxx = 0; 
//
//		for (int i = IX + 1; i < n; i++)
//		{
//			summ += v[i];
//			right_minn = min(right_minn, summ);
//			right_maxx = max(right_maxx, summ);
//		}
//
//
//		long long left_with = left_minn + right_minn + v[IX];
//		long long right_with = left_maxx + right_maxx + v[IX];
//		 
//
//		if (max(left_with, left_without) > min(right_with, right_without))
//		{
//			cout << (max(right_with, right_without)-max(left_with,left_without)+ 1) + (min(right_with, right_without) - min(left_with, left_without) + 1) << endl;
//
//			for (long long i = min(left_with, left_without); i <= min(right_with, right_without); i++)
//			{
//				cout << i << " ";
//			}
//
//			for (long long i = max(left_with, left_without); i <= max(right_with, right_without); i++)
//			{
//				cout << i << " ";
//			}
//		}
//		else
//		{
//			cout << max(right_with, right_without) - min(left_with, left_without) + 1 << endl;
//			for (long long i = min(left_with, left_without); i <= max(right_with, right_without); i++)
//			{
//				cout << i << " ";
//			}
//		}
//
//		cout << endl;
//	}
//
//}
//
//
