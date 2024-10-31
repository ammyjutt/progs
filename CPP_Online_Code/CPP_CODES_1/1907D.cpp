//using namespace std;
//
//#include <iostream>
//#include <vector>
//
//
//
//bool binary_search(int k, vector<pair<int,int>>& v)
//{
//	int cur_left = 0;
//	int cur_right = 0;
//	
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		pair<int, int> next = v[i];
//		if (next.first >= cur_right)
//		{
//			if (cur_right + k >= next.first)
//			{
//				cur_left = next.first; 
//				cur_right = min(cur_right + k, next.second);
//			}
//			else
//			{
//				return false;
//			}
//
//		}
//		else if (next.second <= cur_left)
//		{
//			if (cur_left - k <= next.second)
//			{
//				cur_left = max(cur_left - k, next.first);
//				cur_right = next.second;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else 
//		{
//
//			cur_left = max(cur_left - k, next.first);
//			cur_right = min(cur_right + k, next.second);
//		}
//	}
//
//	return true;
//}
//
//
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
//		vector< pair<int, int> > v;
//
//		int a; int b;
//		cin >> a >> b;
//		v.push_back({ a,b });
//		n -= 1;
//
//		int left = a;
//		int right = INT_MIN;
//
//
//
//		while (n--)
//		{
//			cin >> a >> b;
//			right = max(b, right);
//			v.push_back({ a,b });
//		}
//
//
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (binary_search(mid, v) == false)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid;
//			}
//		}
//		cout << left << endl;
//	}
//}