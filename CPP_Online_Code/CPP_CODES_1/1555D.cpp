//using namespace std;
//#include <iostream>
//#include <unordered_set>
//#include <vector>
//
//int main()
//{
//
//	int n; int m; 
//	cin >> n >> m;
//	string s; cin >> s;
//
//
//	if (n <= 2)
//	{
//		while (m--)
//		{
//			int l, r; cin >> l >> r;
//			if (l == r or s[l - 1] != s[r - 1])
//				cout << 0 << endl;
//			else
//				cout << 1 << endl;
//		}
//		return 0;
//	}
//
//
//
//	auto next = [](int c, int i)->int
//	{
//		return 97 + ((c - 97) + i) % 3;
//	};
//
//
//
//	vector<vector<int>> dp(6, vector<int>(n, 0));
//	unordered_set<char> st;
//
//	int ix_i = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		char three = next(s[0], i);
//
//		for (int j = 0; j < 3; j++)
//		{
//			char two = next(s[1], j);
//			if (two != three)
//			{
//				dp[ix_i][0] = three == s[0] ? 0 : 1;
//				dp[ix_i][1] = two != s[1] ? 1 + dp[ix_i][0] : dp[ix_i][0];
//				for (int ix_j = 2; ix_j < n; ix_j++)
//				{
//					st.insert('a'); st.insert('b'); st.insert('c');
//					st.erase(two);
//					st.erase(three);
//					char want = *st.begin();
//
//					dp[ix_i][ix_j] = want != s[ix_j] ? dp[ix_i][ix_j - 1] + 1 : dp[ix_i][ix_j - 1];
//
//					three = two; 
//					two = want;
//				}
//
//				ix_i++;
//			}
//		}
//	}
//
//
//
//	while (m--)
//	{
//		int l, r; 
//		cin >> l >> r; 
//		int minn_ans = INT_MAX;
//
//		for (int i = 0; i < 6; i++)
//		{
//			int to_sub = l == 1 ? 0 : dp[i][l - 2];
//			int cur_ans = dp[i][r - 1] - to_sub;
//			minn_ans = min(minn_ans, cur_ans);
//		}
//		cout << minn_ans << endl;
//	}
//
//	
//}
//
