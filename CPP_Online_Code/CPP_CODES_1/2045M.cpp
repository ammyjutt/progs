//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <functional>
//#include <unordered_set>
//#include <string>
//
//
//vector<short int> dir_v = { -1,0,1,0,-1 };
//
// // ::TOFIX
//
//int main()
//{
//
//	int r, c; cin >> r >> c; 
//
//	vector<vector<char>> grid(r, vector<char>(c));
//
//	int k = 0;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin >> grid[i][j];
//			k += (grid[i][j] == '.' ? 0 : 1);
//		}
//	}
//
//
//	unordered_set<string> st;
//
//
//	function<void(int, int, string)> fun;
//
//	fun = [&](int i, int j, string from)
//		{
//			if (i < 0 or i == r or j < 0 or j == c or st.size() == k)
//			{
//				return;
//			}
//
//			if (grid[i][j] == '.')
//			{
//				if (from == "left")
//					fun(i, j + 1, from);
//				else if (from == "right")
//					fun(i, j - 1, from);
//				else if (from == "top")
//					fun(i + 1, j, from);
//				else
//					fun(i - 1, j, from);
//			}
//			else
//			{
//				st.insert(to_string(i) + to_string(j));
//				if (grid[i][j] == '/')
//				{
//					if (from == "top")
//						fun(i, j - 1, "right");
//					else if (from == "right")
//						fun(i + 1, j, "top");
//					else if (from == "bottom")
//						fun(i, j + 1, "left");
//					else if (from == "left")
//						fun(i - 1, j, "bottom");
//				}
//				else if(grid[i][j] == '\\')
//				{
//					if (from == "top")
//						fun(i, j + 1, "left");
//					else if (from == "right")
//						fun(i - 1, j, "bottom");
//					else if (from == "bottom")
//						fun(i, j - 1, "right");
//					else if (from == "left")
//						fun(i + 1, j, "top");
//				}
//			}
//
//
//
//		};
//
//
//	vector<string> ans;
//
//
//	for (int i = 0; i < r; i++)
//	{
//		st.clear();
//		fun(i, 0, "left");
//		if(st.size() == k)
//			ans.push_back("W" + to_string(i + 1));
//	}
//	for (int i = 0; i < r; i++)
//	{
//		st.clear();
//		fun(i, c-1, "right");
//		if (st.size() == k)
//			ans.push_back("E" + to_string(i + 1));
//	}
//
//	for (int j = 0; j < c; j++)
//	{
//		st.clear(); 
//		fun(0, j, "top");
//		if (st.size() == k)
//			ans.push_back("N" + to_string(j + 1));
//	}
//
//	for (int j = 0; j < c; j++)
//	{
//		st.clear();
//		fun(r-1, j, "bottom");
//		if (st.size() == k)
//			ans.push_back("S" + to_string(j + 1));
//	}
//
//	cout << ans.size() << endl;
//	for (auto& ele : ans)
//		cout << ele << " ";
//}
//
//
//
