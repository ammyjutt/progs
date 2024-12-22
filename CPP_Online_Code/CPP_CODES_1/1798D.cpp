//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//
//int main()
//{
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n; 
//		vector<int> pos; 
//		vector<int> neg;
//
//		long long mexx = 0;
//		long long minn = 100000000000;
//
//
//		for (int i = 0; i < n; i++)
//		{
//			long long cur; cin >> cur;
//			mexx = max(mexx, cur);
//			minn = min(minn, cur);
//
//			if (cur < 0)
//				neg.push_back(cur);
//			else if (cur > 0)
//				pos.push_back(cur);
//		}
//
//		if (pos.empty() and neg.empty())
//		{
//			cout << "NO" << endl;
//			continue;
//		}
//
//
//		long long margin = mexx - minn;
//
//		int lo, hi;
//
//		if (margin & 1)
//		{
//			lo = -margin / 2;
//			hi = margin / 2;
//		}
//		else
//		{
//			
//			if (pos[0] <= neg[0])
//			{
//				hi = margin / 2;
//				lo = -(margin / 2 - 1);
//
//			}
//			else
//			{
//				hi = margin / 2 - 1;
//				lo = -margin / 2;
//			}
//		}
//
//
//
//
//		int pos_idx = 0;
//		int neg_idx = 0;
//
//		int cur = 0;
//		int len = pos.size() + neg.size();
//
//		cout << "YES" << endl;
//
//		for (int i = 0; i < (n - len); i++)
//			cout << 0 << " ";
//
//
//		for (int i = 0; i < len; i++)
//		{
//			
//			if (pos_idx == pos.size())
//			{
//				cout << neg[neg_idx] << " ";
//				cur += neg[neg_idx++];
//			}
//
//			else if (neg_idx == neg.size())
//			{
//				cout << pos[pos_idx] << " ";
//				cur += pos[pos_idx++];
//			}
//			else
//			{
//				if (cur + pos[pos_idx] <= hi)
//				{
//					cout << pos[pos_idx] << " ";
//					cur += pos[pos_idx++];
//				}
//				else
//				{
//					cout << neg[neg_idx] << " ";
//					cur += neg[neg_idx++];
//				}
//			}
//		}
//		cout << endl;
//	}
//}
//
//
//
//
