//using namespace std;
//#include <iostream>
//#include <vector>
//
//
//class Solution {
//public:
//    string lastSubstring(string s) {
//
//
//
//        int first_ix = 0;
//        int second_ix = 1;
//
//        int first_ix_start = 0;
//        int second_ix_start = 1;
//
//        int len_s = s.length();
//
//        while (true)
//        {
//
//
//
//            while (second_ix < len_s and s[first_ix] == s[second_ix])
//            {
//                first_ix++;
//                second_ix++;
//            }
//
//
//            if (second_ix == len_s)
//            {
//                return s.substr(first_ix_start);
//            }
//
//            else if (s[second_ix] > s[first_ix])
//            {
//                first_ix = second_ix_start;
//                second_ix = first_ix + 1;
//
//                first_ix_start = first_ix;
//                second_ix_start = second_ix;
//            }
//            else
//            {
//                second_ix_start = second_ix;
//                first_ix = first_ix_start;
//            }
//
//
//
//        }
//
//    }
//};
//
//
//
//int main()
//{
//	Solution s;
//
//}
//
//
