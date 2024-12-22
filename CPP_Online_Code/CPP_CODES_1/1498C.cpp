//using namespace std;
//#include <iostream>
//#include <unordered_map>
//#include <tuple>
//#include <functional>
//


// TODO: Learn the memoization of tuple in this 

// TLE: DO WITH 3D DP ( DP Method Below ) 


//template<>
//struct hash<tuple<int, int, int>> {
//    size_t operator()(const tuple<int, int, int>& t) const {
//        size_t seed = 0;
//        // Combine hash values of individual tuple elements
//        seed ^= hash<int>{}(get<0>(t)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//        seed ^= hash<int>{}(get<1>(t)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//        seed ^= hash<int>{}(get<2>(t)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//        return seed;
//    }
//};
//
//
//
//
//std::unordered_map<std::tuple<int, int, int>, int> cache;
//
//
//int fun(int front, int back, int age)
//{
//    if (age <= 0 || front == 0)
//        return 0;
//    auto key = make_tuple(front, back, age);
//
//    auto it = cache.find(key);
//    if (it != cache.end())
//    {
//        return it->second;
//    }
//    int result = ((age == 1 ? 0:1 ) + (long long)(fun(front-1,back+1,age)) + fun(back,front,age-1)) % 1000000007;
//
//    return cache[key] = result;
//}
//
//
//
//
//
//int main()
//{
//	short int t; cin >> t;   
//
//
//
//  	while (t--)
//	{
//        int n; int k; cin >> n >> k;
//        cout << (fun(n, 0, k) + 1) % 1000000007 << endl;
//	}
//}
















//using namespace std;
//#include <iostream>
//#include <vector>
//const int MOD = 1000000007;
//int main()
//{
//
//	int t; cin >> t;
//	while (t--)
//	{
//		int n;int k; cin >> n >> k;
//		vector<vector<int>> dp(k+1, vector<int>(n+1, 1));
//		for (int age = 2; age <= k; age++)
//		{
//			for (int back = n-1; back >= 0; back--)
//			{
//				dp[age][back] = (dp[age][back + 1] + dp[age - 1][n - back]) % MOD;
//			}
//		}
//		cout << dp[k][0] << endl;
//	}
//}

