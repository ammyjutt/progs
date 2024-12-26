//using namespace std; 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main()
//{
//	int t; cin >> t; 
//
//	while (t--)
//	{
//		int n, m; cin >> n >> m;
//
//		vector<int> rating; 
//
//		int kevin_rating; cin >> kevin_rating;
//
//		for (int i = 1; i < n;i++)
//		{
//			int temp; cin >> temp; 
//			if (temp > kevin_rating)
//				rating.push_back(temp);
//		}
//		
//		vector<int> diff;
//		int can_solve = 0; 
//		for (int i = 0; i < m; i++)
//		{
//			int prob_rating; cin >> prob_rating; 
//			if (prob_rating <= kevin_rating)
//				can_solve++;
//			else
//				diff.push_back(prob_rating);
//		}
//
//
//		sort(rating.begin(), rating.end());
//
//
//		int len_diff = diff.size();
//		for (int i = 0; i < len_diff; i++)
//		{
//			diff[i] = rating.end() - lower_bound(rating.begin(), rating.end(), diff[i]);
//		}
//
//		sort(diff.begin(), diff.end());
//
//		for (int k = 1; k <= m; k++)
//		{
//			long long ans = can_solve / k;
//
//			int sub = can_solve % k;
//
//			int ix = k - 1 - sub;
//			while (ix < len_diff)
//			{
//				ans += diff[ix] + 1;
//				ix += k;
//			}
//
//			cout << ans << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//
//
