using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>



//
//
//bool cmp_function(vector<int>& a, vector<int>& b)
//{
//    return a[0] < b[0];
//}
//
//
//
//class Solution {
//public:
//    int videoStitching(vector<vector<int>>& clips, int time) {
//
//        sort(clips.begin(), clips.end(), cmp_function);
//
//
//        int pointer = 0;
//        int current_time = 0;
//        int ans = 0;
//
//        while (current_time < time)
//        {
//            int mexx = current_time;
//
//            while (pointer < clips.size() and clips[pointer][0] <= current_time)
//            {
//                mexx = max(mexx, clips[pointer][1]);
//                pointer++;
//            }
//            if (mexx == current_time)
//                return -1;
//
//            ans += 1;
//            current_time = mexx;
//        }       
//        return ans;
//    }
//};


//
//
//
//int main()
//{
//    Solution s;
//    
//    vector<vector<int>> v = { {0,2},{4,6} };
//    s.videoStitching(v, 10);
//}
//




