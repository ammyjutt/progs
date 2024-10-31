//using namespace std;
//#include <iostream>
//#include <vector>
//#include <set>
//#include <deque>
//
//struct Cmp {
//
//    bool operator()(const pair<int, int>& a,const pair<int, int>& b) const
//    {
//        return a.first < b.first; 
//    }
//};
//
//
//class Solution {
//public:
//    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
//
//        set<pair<int, int> , Cmp> st;
//        deque<set<pair<int, int>, Cmp>::iterator> dq;
//        
//        auto pair = st.insert({ nums[0],0 });
//        dq.push_front(pair.first);
//
//        for (int i = 1; i < nums.size(); i++)
//        {
//            if (dq.size() > indexDiff)
//            {
//                st.erase(dq.front());
//                dq.pop_front();
//            }
//
//            auto it = st.lower_bound({ nums[i] - valueDiff, i });          
//
//            if (it != st.end())
//            {
//                if (abs(it->first - nums[i]) <= valueDiff)
//                    return true;
//            }
//            auto pair = st.insert({ nums[i],i });
//            dq.push_back(pair.first);
//        }
//        
//        return false;
//    }
//};

