//using namespace std;
//#include <iostream>
//#include <vector>
//#include <string>
//
//
//
//
//
//int fun(string& str_n, int& a, int& b, int& len_n)
//{
//	int exact_len = len_n * a - b;
//	int number = 0;
//	int len_num = 0;
//	int str_n_ix = 0;
//
//	while (len_num != exact_len)
//	{
//		char c = str_n[str_n_ix];
//		str_n_ix = (str_n_ix + 1) % len_n;
//		number = number * 10 + (c - '0');
//		len_num++;
//	}
//
//	return number;	
//}
//
//
//
//int main()
//{
//	short int t; 
//	cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//
//		string str_n = to_string(n);
//		int len_n = str_n.length();
//
//		vector< pair<int, int>> answers;
//
//
//		for (int a = 1; a <= 10000; a++)
//		{
//			int total_len = len_n * a;
//			int min_b = total_len - 6;
//			int max_b = min_b + 5;
//
//			if (min_b <= 0)
//				min_b = 1;
//			
//
//
//
//			for (int b = min_b; b <= max_b; b++)
//			{
//				int real_result = n * a - b;
//				int fake_result = fun(str_n, a, b, len_n);
//				if (real_result == fake_result)
//				{
//					answers.push_back({ a,b });
//				}
//			}
//		}
//
//		cout << answers.size() << endl;
//		for (const auto& pair : answers)
//		{
//			cout << pair.first << " " << pair.second << endl;
//		}
//	}
//}
//
//
