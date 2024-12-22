//using namespace std;
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		vector<int> freqs(26, 0);
//
//		int n; cin >> n;
//		string s; 
//		cin >> s; 
//
//
//		for (auto& c : s)
//		{
//			freqs[c-97]++;
//		}
//
//
//		vector<pair<int,char>> sorted_freqs; 
//		for (int i = 0; i < 26; i++)
//		{
//			if (freqs[i] > 0)
//			{
//				sorted_freqs.push_back({ freqs[i], i + 97 });
//			}
//		}
//
//
//
//		sort(sorted_freqs.begin(), sorted_freqs.end());
//		int original_uniq_chars = sorted_freqs.size();
//		int maxx_freq = sorted_freqs[original_uniq_chars-1].first;
//		
//	
//		int sum_below = 0; 
//		int ptr = 0; 
//		vector<int> freq_to_op_required(n + 1, INT_MAX);
//
//		int cur_freq;
//		for (cur_freq = 1; cur_freq <= maxx_freq; cur_freq++)
//		{
//			sum_below += (original_uniq_chars - ptr);
//			while (ptr < original_uniq_chars and (sorted_freqs[ptr].first == cur_freq))
//			{
//				ptr++;
//			}
//
//			int above = n - sum_below;
//			int required_below = (ptr * cur_freq) - sum_below;
//
//
//			if (above < required_below)
//			{
//				break;
//			}
//
//			if ((above - required_below) % cur_freq != 0)
//				continue;
//
//
//			int num_new_bins = (above - required_below) / cur_freq;
//
//			if (num_new_bins + original_uniq_chars > 26)
//				continue;
//
//			freq_to_op_required[cur_freq] = above;
//		}
//
//
//
//		for (int cur_freq = maxx_freq ; cur_freq <= n; cur_freq++)
//		{
//			if (n % cur_freq == 0)
//			{
//				int num_towers = n / cur_freq;
//
//				int op = 0; 
//				for (int i = 0; i < num_towers; i++)
//				{
//					op += (cur_freq - sorted_freqs[(original_uniq_chars-1) - i].first);
//				}
//
//				freq_to_op_required[cur_freq] = op;
//			}
//		}
//
//
//		
//		int optimal_freq = 1; 
//		for (int i = 2; i <= n; i++)
//		{
//			if (freq_to_op_required[i] < freq_to_op_required[optimal_freq])
//			{
//				optimal_freq = i; 
//			}
//		}
//		// PRINT OPERATIONS
//		cout << freq_to_op_required[optimal_freq] << endl;
//
//
//		int final_uniq_chars = n / optimal_freq;
//		vector<bool> to_print(26, false);
//		vector<pair<int, char>> thorde;
//
//
//		if (final_uniq_chars < original_uniq_chars)
//		{
//			reverse(sorted_freqs.begin(), sorted_freqs.end());
//			
//			for (int i = 0; i < final_uniq_chars; i++)
//			{
//				to_print[sorted_freqs[i].second-97] = true;
//				if (sorted_freqs[i].first < optimal_freq)
//				{
//					thorde.push_back({ optimal_freq - sorted_freqs[i].first , sorted_freqs[i].second});
//				}
//			}
//		}
//		else
//		{
//			for (int i = 0; i < 26; i++)
//			{
//				if (freqs[i] > 0)
//				{
//					to_print[i] = true;
//				}
//			}
//
//			int extra_chars = (n - (original_uniq_chars * optimal_freq)) / optimal_freq; 
//
//			for (int i = 0; i < 26 and (extra_chars > 0); i++)
//			{
//				if (to_print[i] == false)
//				{
//					to_print[i] = true;
//					thorde.push_back({ optimal_freq,i + 97 });
//					extra_chars--;
//				}
//			}
//		}
//
//
//
//
//		vector<int> printed(26, 0);
//		int idx = 0;
//		for (auto& c : s)
//		{
//			if (to_print[c - 97] and printed[c - 97] < optimal_freq)
//			{
//				cout << c;
//				printed[c - 97]++;
//			}
//			else
//			{
//				if (thorde[idx].first == 0)
//					idx++;
//				if(idx < thorde.size())
//				{
//					cout << thorde[idx].second;
//					thorde[idx].first -= 1;
//				}	
//			}
//		}
//		cout << endl;
//	}
//}
//
//
