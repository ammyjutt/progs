//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//pair<int,int> count_digits_and_trailing_zeros(int& temp)
//{
//	pair<int, int> ans({ 0,0 });
//
//	bool red_flag = false;
//
//	while (temp)
//	{
//		ans.first += 1;
//		if (temp % 10 == 0 && (red_flag == false))
//		{
//			ans.second += 1;
//		}
//		else
//		{
//			red_flag = true;
//		}
//		temp /= 10;
//	}
//
//	return ans;
//}
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
//
//
//		int n; int m;
//		cin >> n >> m;
//
//		vector<int> zeros;
//		int digits_count = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			int temp; cin >> temp;
//			pair<int,int> pair = count_digits_and_trailing_zeros(temp);
//			digits_count += pair.first;
//			if(pair.second > 0)
//			{
//				zeros.push_back(pair.second);
//			}
//		}
//
//		sort(zeros.begin(), zeros.end());
//
//		int len_zeros = zeros.size();
//
//		for (int i = len_zeros - 1; i >= 0; i -= 2)
//		{
//			digits_count -= zeros[i];
//		}
//
//		if (digits_count >= m + 1)
//			cout << "Sasha" << endl;
//		else
//			cout << "Anna" << endl;
//	}
//}
//
//
//
//
//
//
