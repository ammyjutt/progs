//using namespace std; 
//#include <iostream>
//#include <unordered_map>
//#include <algorithm>
//#include <vector>
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n; cin >> n; 
//		int k; cin >> k;
//		unordered_map<int, int> mp; 
//		for (int i = 1; i <= n; i++)
//		{
//			int temp; cin >> temp; 
//			mp[temp]++;
//		}
//
//		vector<int> v; 
//		for (auto& kv : mp)
//		{
//			v.push_back(kv.second);
//		}
//
//		sort(v.begin(), v.end());
//		int ix = 0; 
//
//		while (true)
//		{
//			if (ix < v.size() and k >= v[ix])
//			{
//				k -= v[ix]; 
//				ix++;
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		cout << max(int(v.size() - ix),1) << endl;
//	}
//}
//
//
//
