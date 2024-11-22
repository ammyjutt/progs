//using namespace std;
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//#include <algorithm>
//
//
//vector<int> process(int size)
//{
//	vector<int> v(size+1,0);
//	int count = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == 1)
//		{
//			count += 1;
//		}
//		else
//		{
//			int temp = 1;
//			for (int i = count; i >= 1; i--)
//			{
//				v[i] += temp;
//				temp += 1;
//			}
//			count = 0;
//		}
//	}
//	if (count != 0)
//	{
//		int temp = 1;
//		for (int i = count; i >= 1; i--)
//		{
//			v[i] += temp;
//			temp += 1;
//		}
//	}
//	return v;
//}
//
//
//
//int main()
//{
//	int n; int m; int area;
//	cin >> n >> m >> area;
//
//	vector<int> v_one = process(n);
//	vector<int> v_two = process(m);
//	
//
//	long long ans = 0;
//
//	for (int i = 1; i * i <= area; i++)
//	{
//		if (area % i == 0)
//		{
//			if ((i <= n) and ((area / i) <= m))
//				ans += v_one[i] * v_two[area / i];
//			if(i != (area/i) and  ((i <= m) and ((area / i) <= n)))
//			{
//				ans += v_one[area / i] * v_two[i];
//			}
//		}
//	}
//	cout << ans << endl;
//}
//
//
