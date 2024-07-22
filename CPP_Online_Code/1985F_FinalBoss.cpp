//using namespace std;
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <climits>
//
//
//
//
//bool fun(vector<int>& cooldown_times, vector<int>& damages, long long& turn, int& h)
//{
//	long long total_damage = 0;
//	for (int i = 0; i < cooldown_times.size(); i++)
//	{
//		total_damage += damages[i] * (ceil(double(turn) / cooldown_times[i]));
//		if (total_damage >= h)
//			return true;
//	}
//	return false;
//}
//
//
//
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
//		int h, n;
//		cin >> h >> n;
//
//		vector<int> damages(n);
//
//		for (int i = 0; i < n; i++)
//		{
//			int temp;
//			cin >> temp;
//			damages[i] = temp;
//		}
//
//		vector<int> cooldown_times(n);
//
//		for (int i = 0; i < n; i++)
//		{
//			int temp;
//			cin >> temp;
//			cooldown_times[i] = temp;
//		}
//
//
//		int max_cooldown_time = INT_MIN;
//
//		for (const auto& item : cooldown_times)
//		{
//			if (item > max_cooldown_time)
//				max_cooldown_time = item;
//		}
//
//		double damage_per_turn = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			double temp = damages[i] / double(cooldown_times[i]);
//			damage_per_turn += temp;
//		}
//
//		double expected_max_turns = h / damage_per_turn;
//		
//		
//
//
//
//
//
//
//		long long left = 1;
//		long long right = floor( expected_max_turns * 2);
//
//		while (left < right)
//		{
//			long long mid = (left + right) / 2;
//
//			bool res = fun(cooldown_times, damages, mid, h);
//
//			if (res == true)
//			{
//				right = mid;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//
//		cout << left << endl;
//	}
//}
//
//
//
//
