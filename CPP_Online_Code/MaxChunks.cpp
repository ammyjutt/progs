//using namespace std;
//#include <iostream>
//#include <stack>
//#include <vector>
//
//
//class Solution {
//public:
//    int maxChunksToSorted(vector<int>& arr) {
//        vector<int> st;
//        st.push_back(INT_MIN);
//
//        for (int i = 0; i < arr.size(); i++)
//        {
//            if (arr[i] > st.back())
//            {
//                st.push_back(arr[i]);
//            }
//            else
//            {
//                int to_push = st.back();
//                while (arr[i] < st.back())
//                {
//                    st.pop_back();
//                }
//                st.push_back(to_push);
//            }
//        }
//
//        return st.size() - 1;
//    }
//};
//
//
//
//
//
//int main2()
//{
//
//
//
//	return 0;
//}
