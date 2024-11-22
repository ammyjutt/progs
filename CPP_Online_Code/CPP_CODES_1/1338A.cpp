//using namespace std;
//#include <iostream>
//#include <math.h>
//
//int left_most_bit_position(long long num)
//{
//	
//	int idx = 0;
//	for (int i = 1; i < 63; i++)
//	{
//		num >>= 1;
//		if ((num & 1) == 1)
//		{
//			idx = i;
//		}
//	}
//	return idx;
//}
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		int n; cin >> n;
//
//		long long mexx_ele; cin >> mexx_ele;
//		long long mexx_created_so_far = 0;
//		int least_time = -1;
//
//		for (int i = 1; i < n; i++)
//		{
//			long long cur; cin >> cur;
//
//			if (cur < mexx_ele)
//			{
//				long long diff = mexx_ele - cur;
//				if (!(diff <= mexx_created_so_far))
//				{
//					least_time = left_most_bit_position(diff);
//					mexx_created_so_far = 2 * pow(2, least_time) - 1;
//				}
//			}
//			else
//			{
//				mexx_ele = cur;
//			}
//
//		}
//		cout << least_time + 1 << endl;
//	}
//}