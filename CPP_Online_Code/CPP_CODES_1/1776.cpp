//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
//class Solution {
//public:
//    vector<double> getCollisionTimes(vector<vector<int>>& _cars) {
//
//        int len_cars = _cars.size();
//        vector<double> ans(len_cars);
//        ans[len_cars - 1] = -1;
//        vector<int> kis_car_k_sath_takkar_mari(len_cars,-1);
//
//
//
//        vector<int> smaller_on_right(len_cars);
//
//        stack<int> st;
//
//        for (int i = 0; i < len_cars; i++)
//        {
//            while (!st.empty() and _cars[st.top()][1] > _cars[i][1])
//            {
//                smaller_on_right[st.top()] = i;
//                st.pop();
//            }
//            st.push(i);
//        }
//
//        while (!st.empty())
//        {
//            smaller_on_right[st.top()] = -1;
//            st.pop();
//        }
//
//        
//        
//
//        for (int i = len_cars - 2; i >= 0; i--)
//        {
//            int j = smaller_on_right[i];
//
//            if (j == -1)
//            {
//                ans[i] = -1;
//            }
//            else
//            {
//                double current_time = (_cars[j][0] - _cars[i][0]) / double(_cars[i][1] - _cars[j][1]);
//
//                while (ans[j] < current_time && (ans[j] != -1)) {
//                    j = kis_car_k_sath_takkar_mari[j];
//                    current_time = (_cars[j][0] - _cars[i][0]) / double(_cars[i][1] - _cars[j][1]);
//                }
//
//                ans[i] = (_cars[j][0] - _cars[i][0]) / double(_cars[i][1] - _cars[j][1]);
//                kis_car_k_sath_takkar_mari[i] = j;
//            }
//        }
//
//        return ans;
//
//    }
//};
//
//
//
//
