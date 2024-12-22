//using namespace std;
//#include <iostream>
//#include <vector>
//#include <stack>
//
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		string s; cin >> s;
//		long long pos; cin >> pos; 
//		pos -= 1;
//
//		vector<char> st;
//		int cur_end_idx = s.length() - 1;
//		s.push_back(char(1));
//
//		for (auto& c : s)
//		{
//			while (!(pos <= cur_end_idx) and (!st.empty()) and c < st.back())
//			{
//				st.pop_back();
//				pos -= (cur_end_idx + 1);
//				cur_end_idx -= 1;
//			}
//			st.push_back(c);
//		}
//		cout << st[pos];
//	}
//}