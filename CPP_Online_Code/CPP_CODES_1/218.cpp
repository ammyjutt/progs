//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//
//
//class cmp {
//public:
//    bool operator()(const pair<int, int>& a , const pair<int,int>& b)
//    {
//        return a.first < b.first;
//    }
//};
//
//
//bool cmp_func(const pair<int, int>& a, const pair<int, int>& b)
//{
//    return a.first < b.first;
//}
//
//
//
//class Solution {
//public:
//    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
//
//        int n = buildings.size();
//      
//        vector<pair<int,int>> ends(n);
//        vector<vector<int>> ans;
//
//        for (int i = 0; i < n; i++)
//        {
//            ends[i] = {buildings[i][1], i};
//        }
//
//        sort(ends.begin(), ends.end(), cmp_func);
//
//        priority_queue< pair<int, int>, vector<pair<int, int>>, cmp > pq;
//
//        int previous_height = 0;
//
//        int ends_ptr = 0;
//        int b_ptr = 0;
//        // [1,3],[2,0],[2,0],[2,0]
//
//
//        while (b_ptr < n or ends_ptr < n)
//        {
//            int current_time = 0;
//
//           
//            bool increment_ends_ptr = false;
//
//
//            if (b_ptr == n or ends[ends_ptr].first < buildings[b_ptr][0] )
//            {
//                current_time = ends[ends_ptr].first;
//                increment_ends_ptr = true;
//            }
//            else if (buildings[b_ptr][0] < ends[ends_ptr].first)
//            {
//                current_time = buildings[b_ptr][0]; 
//                
//            }
//            else
//            {
//                current_time = buildings[b_ptr][0];
//                increment_ends_ptr = true;
//            }
//
//
//            // insert beginnings            
//            while (b_ptr < n and buildings[b_ptr][0] == current_time)
//            {
//                pq.push({ buildings[b_ptr][2] , b_ptr });
//                b_ptr++;
//            }          
//           
//            // remove endings till here
//            while (!pq.empty() and buildings[pq.top().second][1] <= current_time)
//            {
//                pq.pop();
//            }
//
//            
//
//            if (pq.empty())
//            {
//                ans.push_back({ current_time,0 });
//                previous_height = 0;
//            }
//            else
//            {
//                int new_height = pq.top().first;
//                if (new_height != previous_height)
//                {
//                    ans.push_back({ current_time,new_height});
//                    previous_height = new_height;
//                }
//            }
//
//
//
//        
//
//
//            while (ends_ptr < n and ends[ends_ptr].first <= current_time)
//                ends_ptr++;
//
//
//        }
//
//        return ans;
//    }
//};
//
//
//
//int main()
//{
//
//    Solution s;
//    
//    std::vector<std::vector<int>> vec = {
//    {2, 9, 10},
//    {3, 7, 15},
//    {5, 12, 12},
//    {15, 20, 10},
//    {19, 24, 8}
//    };
//
//    s.getSkyline(vec);
//
//
//
//}
//
//
