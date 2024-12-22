//using namespace std;
//#include <iostream>
//#include <vector>
//#include <functional>
//
//
//
//int main()
//{
//
//	int t; cin >> t; 
//	while (t--)
//	{
//		int n; cin >> n;
//		vector<char> s(n + 1);
//
//		function<int(int)> getEnd;
//		getEnd = [&](int ix)->int
//			{
//				for (int i = ix + 1; i <= n; i++)
//				{
//					cout << "? " << i - 1 << " " << i << endl; cout.flush();					
//					short int res; cin >> res;
//					if (res == 1)
//						return i;
//				}
//				return n + 1;
//			};
//
//
//
//
//		bool answer_invalid = false;
//
//		for (int i = 1; i <= n; )
//		{
//			if (i == n)
//			{
//				cout << "? " << n - 2 << " " << n << endl; cout.flush();
//				int with; cin >> with;
//				if (with == 2)
//				{
//					s[n] = '1';
//				}
//				else
//				{
//					s[n] = '0';
//				}
//				break;
//			}
//
//			int j = getEnd(i);
//			if (j == n+1)
//			{
//				if (i == 1)
//				{
//					answer_invalid = true; 
//					break;
//				}
//				else
//				{
//					cout << "? " << i - 2 << " " << n << endl; cout.flush(); 
//					int ones; cin >> ones; 
//					ones -= 1;
//					
//					int ix = i; 
//					while (ones--)
//					{
//						s[ix++] = '1';
//					}
//
//					while (ix <= n)
//					{
//						s[ix++] = '0';
//					}
//
//					break;
//				}
//			}
//
//			s[j - 1] = '0';
//			s[j] = '1';
//
//
//			if (i + 1 != j)
//			{
//
//				cout << "? " << i << " " << j << endl; cout.flush();
//				int zeros; cin >> zeros;
//
//				zeros -= 1;
//				int ix = j - 2;
//				while (zeros--)
//				{
//					s[ix--] = '0';
//				}
//				while (ix >= i)
//				{
//					s[ix--] = '1';
//				}
//			}
//
//			i = j + 1;
//		}
//
//
//
//
//		if (answer_invalid)
//		{
//			cout << "! IMPOSSIBLE" << endl; 
//		}
//		else
//		{
//			cout << "! ";
//			for (int i = 1; i <= n; i++)
//			{
//				cout << s[i];
//			}
//			cout << endl;
//		}
//
//	}
//}
//
//
//
//
//
