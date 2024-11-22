//using namespace std;
//#include <iostream>
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
//		string s; cin >> s;
//		bool continue_loops = true;
//		int unk = 0;
//		int ones = 0;
//		int zeros = 0;
//
//		for (int i = 0; i < k and continue_loops; i++)
//		{
//			char prev = '?';
//	
//			for (int j = i ; j < n and continue_loops; j+=k)
//			{
//				if (s[j] != '?')
//				{
//					if (prev == '?')
//					{
//						prev = s[j];
//					}
//					else
//					{
//						if (prev != s[j])
//						{
//							continue_loops = false;
//						}
//					}
//					
//				}	
//			}
//			if (prev == '?')
//				unk++;
//			else if (prev == '1')
//				ones++;
//			else
//				zeros++;
//		}
//
//		if (continue_loops == false)
//			cout << "NO" << endl;
//		else
//		{
//			int delta = max(ones, zeros) - min(ones, zeros);
//			if (unk < delta)
//				cout << "NO" << endl;
//			else {
//				if ((unk - delta) % 2 == 0)
//				{
//					cout << "YES" << endl;
//				}
//				else
//				{
//					cout << "NO" << endl;
//				}
//			}
//		}
//
//	}
//
//
//
//}

