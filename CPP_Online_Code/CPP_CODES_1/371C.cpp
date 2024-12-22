//using namespace std;
//#include <iostream>
//#include <unordered_map>
//
//
//int main()
//{
//	string s; cin >> s; 
//	unordered_map<char, int> mp;
//	for (auto& c : s)
//	{
//		mp[c] += 1;
//	}
//
//	int bread, saus, ch; cin >> bread >> saus >> ch;
//
//	long long price_bread, price_saus, price_ch; 
//	cin >> price_bread >> price_saus >> price_ch; 
//
//	long long budget; cin >> budget;
//
//	long long ans = 0; 
//
//
//	while (((bread > 0 and mp['B'] > 0) or (saus > 0 and mp['S'] > 0) or (ch > 0 and mp['C'] > 0)) and budget)
//	{
//		int req_bread = max(0, mp['B'] - bread) ;
//		int req_saus = max(0, mp['S'] - saus);
//		int req_ch = max(0, mp['C'] - ch) ;
//
//		if (budget >= req_bread* price_bread)
//		{
//			budget -= req_bread * price_bread;
//			bread += req_bread;
//		}
//		else
//		{
//			break;
//		}
//
//
//		if (budget >= req_saus * price_saus)
//		{
//			budget -= req_saus* price_saus;
//			saus += req_saus;
//		}
//		else
//		{
//			break;
//		}
//
//
//		if (budget >= req_ch * price_ch)
//		{
//			budget -= req_ch * price_ch;
//			ch += req_ch;
//		}
//		else
//		{
//			break;
//		}
//
//
//		bread -= mp['B'];
//		saus -= mp['S'];
//		ch -= mp['C'];
//		ans += 1;
//	}
//
//
//	if ((bread > 0 and mp['B'] > 0) or (saus > 0 and mp['S'] > 0) or (ch > 0 and mp['C'] > 0))
//	{
//		cout << ans << endl;
//	}
//	else
//	{
//		long long price_for_one = (mp['B'] * price_bread) + (mp['C'] * price_ch) + (mp['S'] * price_saus);
//
//		cout << ans + (budget / price_for_one) << endl;
//	}	
//}
//
