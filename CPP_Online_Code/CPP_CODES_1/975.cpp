//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//// TODO 
//
//class Solution {
//public:
//    int oddEvenJumps(vector<int>& arr) {
//
//        map<int, int> mp;
//
//        int n = arr.size();
//        vector< pair<int, int>> next_index(n); // next_index[i].first -> odd 
//
//        for (int i = n - 1; i >= 0; i--)
//        {
//            auto odd_it = mp.lower_bound(arr[i]);
//            next_index[i].first = odd_it == mp.end() ? -1 : odd_it->second;
//
//            auto even_it = mp.upper_bound(arr[i]);
//            next_index[i].second = even_it == mp.begin() ? -1 : (--even_it)->second;
//
//            mp[arr[i]] = i;
//        }
//
//
//        vector< pair<bool, bool>> solution_exist(n, { false,false }); // solution_exist[i].first -> odd
//
//        solution_exist[n - 1].first = true;
//        solution_exist[n - 1].second = true;
//        int ans = 1;
//
//        for (int i = n - 2; i >= 0; i--)
//        {
//            // i wanna make odd jump from here
//            if (next_index[i].first != -1)
//            {
//                if (solution_exist[next_index[i].first].second == true)
//                {
//                    solution_exist[i].first = true;
//                    ans += 1;
//                }
//            }
//
//            // i wanna make even jump from here
//            if (next_index[i].second != -1)
//            {
//                if (solution_exist[next_index[i].second].first == true)
//                    solution_exist[i].second = true;
//            }
//
//        }
//
//        return ans;
//
//    }
//};
//
//
//int main()
//{
//
//    vector<int> v = { 2,3,1,1,4 };
//    Solution s;
//    cout << s.oddEvenJumps(v) << endl;
//
//}
//
//
//
