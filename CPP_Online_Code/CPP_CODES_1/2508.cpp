//#include <vector>
//#include <unordered_map>
//#include <iostream>
//using namespace std;
//
//
//
//// MEMORY LIMIT - CHANGE APPROACH - USE MAP
//// TODO
//
//
//
//class Solution {
//
//
//    vector<int> get_odd_nodes(vector<int>& degree)
//    {
//        vector<int> ans;
//        for (int i = 0; i < degree.size(); i++)
//        {
//            if (degree[i] & 1)
//                ans.push_back(i);
//           
//        }
//        return ans;
//    }
//
//
//public:
//    bool isPossible(int n, vector<vector<int>>& edges) {
//        vector<int> degree(n + 1, 0);
// 
//
//
//
//
//        bool** edge_exist = new bool* [n + 1];
//        for (int i = 0; i <= n; i++)
//        {
//            edge_exist[i] = new bool[n + 1];
//            memset(edge_exist[i], false, (n + 1) * sizeof(bool));
//        }
//
//
//
//
//        int odd_count = 0;
//
//        for (auto& edge : edges) {
//            edge_exist[edge[0]][edge[1]] = true;
//            edge_exist[edge[1]][edge[0]] = true;
//            degree[edge[0]]++;
//            degree[edge[1]]++;
//
//            odd_count += (degree[edge[0]] & 1) ? +1 : -1;
//            odd_count += (degree[edge[1]] & 1) ? +1 : -1;
//
//        }
//
//        if ((odd_count == 0) || (odd_count == 2) || (odd_count == 4))
//        {
//            if (odd_count == 0)
//                return true;
//            if (odd_count == 2)
//            {
//                vector<int> odd_nodes = get_odd_nodes(degree);
//                if (!edge_exist[odd_nodes[0]][odd_nodes[1]])
//                    return true;
//
//
//                for (int i = 1; i <= n; i++)
//                {
//                    if (i != odd_nodes[0] and i != odd_nodes[1])
//                    {
//                        if ((not edge_exist[odd_nodes[0]][i]) and (not edge_exist[i][odd_nodes[1]]))
//                        {
//                            return true;
//                        }
//                    }
//
//                }
//
//
//            }
//            if (odd_count == 4)
//            {
//                vector<int> odd_nodes = get_odd_nodes(degree);
//                
//                for (int j = 1; j < 4; j++)
//                {
//                    if (!edge_exist[odd_nodes[0]][odd_nodes[j]])
//                    {
//                        if (j == 1 and (not edge_exist[odd_nodes[2]][odd_nodes[3]])) {
//                            return true;
//                        }
//                        else if (j == 2) {
//                            if(not edge_exist[odd_nodes[1]][odd_nodes[3]])
//                                return true;
//                        }
//                        else if ((not edge_exist[odd_nodes[1]][odd_nodes[2]])) {
//                            return true;
//                        }                            
//                    }
//                }
//            }
//        }
//        return false;
//    }
//
//};
//
//
//
//
//
//
//int main()
//{
//
//    vector<vector<int> > pairs = {
//        {2, 19}, {16, 17}, {8, 14}, {2, 16}, {12, 20}, {12, 14}, {16, 18}, {15, 16},
//        {10, 21}, {3, 5}, {13, 18}, {17, 20}, {14, 17}, {9, 12}, {5, 15}, {5, 6},
//        {3, 7}, {2, 21}, {10, 13}, {8, 16}, {7, 18}, {4, 6}, {9, 1}, {13, 21},
//        {18, 20}, {7, 14}, {4, 19}, {5, 8}, {3, 11}, {11, 1}, {7, 12}, {4, 7},
//        {3, 16}, {13, 17}, {17, 19}, {9, 13}, {7, 19}, {10, 16}, {4, 13}, {4, 5},
//        {2, 15}, {12, 19}, {11, 16}, {2, 9}, {11, 17}, {17, 1}, {16, 21}, {4, 10},
//        {10, 14}, {14, 16}, {4, 1}, {13, 20}, {5, 20}, {4, 14}, {4, 21}, {10, 20},
//        {2, 14}, {8, 15}, {4, 8}, {6, 19}, {15, 1}, {19, 1}, {8, 19}, {15, 21},
//        {3, 12}, {11, 18}, {9, 17}, {18, 19}, {7, 21}, {3, 21}, {16, 19}, {11, 15},
//        {5, 1}, {8, 17}, {3, 15}, {8, 1}, {10, 19}, {3, 8}, {6, 16}, {2, 8},
//        {5, 18}, {11, 13}, {11, 20}, {14, 21}, {6, 20}, {4, 20}, {12, 13}, {5, 12},
//        {10, 11}, {9, 15}, {3, 19}, {9, 20}, {14, 18}, {21, 1}, {13, 19}, {8, 21},
//        {2, 13}, {3, 10}, {9, 18}, {19, 21}, {6, 7}, {3, 18}, {2, 18}, {6, 14},
//        {3, 17}, {5, 21}, {14, 20}, {8, 9}, {16, 1}, {3, 4}, {13, 1}, {5, 9},
//        {4, 15}, {17, 21}, {20, 21}, {2, 17}, {13, 14}, {11, 14}, {9, 16}, {10, 18},
//        {6, 15}, {6, 12}, {3, 13}, {5, 11}, {6, 1}, {12, 17}, {8, 10}, {5, 10},
//        {8, 18}, {4, 12}, {10, 1}, {6, 13}, {4, 18}, {7, 20}, {7, 16}, {2, 6},
//        {12, 21}, {4, 17}, {15, 18}, {13, 16}, {15, 20}, {7, 10}, {6, 10}, {2, 20},
//        {7, 15}, {18, 1}, {12, 1}, {3, 20}, {7, 1}, {14, 15}, {4, 9}, {11, 19},
//        {7, 9}, {5, 17}, {18, 21}, {6, 21}, {8, 11}, {6, 17}, {3, 14}, {7, 11},
//        {5, 7}, {7, 13}, {6, 8}, {6, 9}, {10, 12}, {5, 16}, {2, 4}, {17, 18},
//        {9, 11}, {12, 16}, {3, 6}, {12, 18}, {3, 9}, {11, 12}, {14, 19}, {10, 15},
//        {5, 13}, {8, 13}, {15, 17}, {2, 10}, {11, 21}, {20, 1}, {6, 18}, {2, 12},
//        {19, 20}, {6, 11}, {8, 12}, {2, 3}, {12, 15}, {2, 11}, {9, 10}, {7, 17},
//        {9, 19}, {13, 15}, {7, 8}, {4, 11}, {2, 5}, {5, 19}, {16, 20}, {15, 19},
//        {9, 14}, {14, 1}, {10, 17}, {9, 21}, {2, 7}, {8, 20}, {5, 14}, {4, 16}
//    };
//
//
//    Solution s;
//    std::cout << s.isPossible(21, pairs);
//
//
//
//
//}
//
//
//
//
//
//
