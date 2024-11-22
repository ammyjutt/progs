//using namespace std;
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		// aba aba
//		int n; cin >> n;
//		int k; cin >> k;
//		string word;
//		cin >> word;
//		int ans = 0;
//		for (int s = 0; s < ((k + 1) / 2); s++)
//		{
//			vector<int> freq(26, 0);
//			int mexx = 0;
//			for (int i = 0; i < n; i += k)
//			{
//				int start = i + s;
//				int end = (i+(k-1))-s;
//				freq[word[start]-'a']++;
//				if(start != end)
//					freq[word[end] - 'a']++;
//				mexx = max(mexx, freq[word[start] - 'a']);
//				mexx = max(mexx, freq[word[end] - 'a']);				
//			}
//
//			int mul = ((k % 2 == 1) and (s == k / 2)) ? 1 : 2;
//
//			ans += mul * (n/k)-mexx;
//		}
//		cout << ans << endl;
//	}
//}