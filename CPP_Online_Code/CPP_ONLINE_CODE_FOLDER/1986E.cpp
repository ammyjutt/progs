//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//
//
//
//
//
//
//
//
//int main()
//{
//	short int t; 
//	cin >> t;
//	while (t--)
//	{
//		int n; int k; cin >> n >> k;
//		unordered_map< int, vector<int>> mp;
//		int ans = 0;
//		bool has_odd_occurred = false;
//
//		for (int i = 0; i < n; i++)
//		{
//			int a_i; cin >> a_i;
//			mp[a_i % k].push_back(a_i);
//		}
//
//
//		bool print_ans = true;
//
//		for (auto& key_value : mp)
//		{
//			sort(key_value.second.begin(), key_value.second.end());
//
//			if (key_value.second.size() % 2 == 1)
//			{
//				if (has_odd_occurred == true)
//				{
//					cout << -1 << endl;
//					print_ans = false;
//					break;
//				}
//				else
//				{
//					has_odd_occurred = true;
//
//					// first part 
//
//					int len_temp_vec = key_value.second.size();
//					
//
//					if (len_temp_vec == 3)
//					{
//						ans += min(key_value.second[1] - key_value.second[0],  key_value.second[2]-key_value.second[1]) / k;
//						continue;
//					}
//
//
//					int half = len_temp_vec / 2;
//					
//					vector<int> suffix_sum(half);
//					int temp_sum = 0;
//
//					for (int i = 0; i < half; i++)
//					{
//						temp_sum += key_value.second[len_temp_vec - 1 - (i * 2)] - key_value.second[len_temp_vec - 1 - (i * 2) -1];
//						suffix_sum[i] = temp_sum;
//					}
//
//
//					int minn_ans = INT_MAX;
//					int left_sum = 0;
//
//
//					for (int i = 0; i < len_temp_vec; i += 2)
//					{
//						left_sum += (i == 0 ? 0 : key_value.second[i - 1] - key_value.second[i - 2]);
//						int right_sum = i == len_temp_vec - 1 ? 0 : suffix_sum[ ((len_temp_vec - 1 - i) - 1) / 2]; 
//						minn_ans = min(minn_ans, (left_sum + right_sum) / k);
//					}
//
//					ans += minn_ans;
//				}
//			}
//
//			else
//			{
//				
//				for (int i = 0; i < key_value.second.size(); i += 2)
//				{
//					ans += (key_value.second[i + 1] - key_value.second[i]) / k;
//				}
//			}
//			
//
//
//		}
//
//
//		if(print_ans)
//			cout << ans << endl;
//	}
//}
//
//
