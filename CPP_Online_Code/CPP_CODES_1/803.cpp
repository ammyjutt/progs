//using namespace std;
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//
//class DSU {
//    vector<int> parent;
//    vector<int> group_size;
//public : 
//
//    DSU(int n)
//    {
//        parent = vector<int>(n);
//        group_size = vector<int>(n, 1);
//
//        for (int i = 0; i < n; i++)
//        {
//            parent[i] = i;
//        }
//    }
//
//    int find_parent(int i)
//    {
//        if (parent[i] == i)
//        {
//            return i;
//        }
//        return parent[i] = find_parent(parent[i]);
//    }
//
//    void merge(int i, int j)
//    {
//        int parent_a = find_parent(i);
//        int parent_b = find_parent(j);
//
//        if (parent_a != parent_b)
//        {
//            if (parent_b != parent.size()-1 and (group_size[parent_a] >= group_size[parent_b] or parent_a == parent.size()-1))
//            {
//                parent[parent_b] = parent_a;
//                group_size[parent_a] += group_size[parent_b];
//            }
//            else
//            {
//                parent[parent_a] = parent_b;
//                group_size[parent_b] += group_size[parent_a];
//            }
//            
//        }
//    }
//
//    int get_group_size(int i)
//    {
//        return group_size[find_parent(i)];
//    }
//
//
//};
//
//
//
//
//class Solution {
//public:
//
//    vector<int> hitBricks(vector<vector<int>>& grid, vector<vector<int>>& hits) {
//        
//
//        vector<vector<int>> original(grid);
//
//
//        for (const auto& hit : hits)
//        {
//            grid[hit[0]][hit[1]] = 0;
//        }
//
//        int m = grid.size();
//        int n = grid[0].size();
//
//        DSU dsu(m * n + 1);
//
//        for (int i = 0; i < n; i++)
//        {
//            if(grid[0][i] == 1)
//                dsu.merge(m * n, i);
//        }
//
//        for (int i = 1; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                // connect with top 
//                if (grid[i - 1][j] == 1 and grid[i][j] == 1)
//                {
//                    int top_id = (i - 1) * n + j;
//                    int current_id = i * n + j;
//                    dsu.merge(top_id, current_id);
//                }
//
//                // connect with left 
//                if (j > 0 and grid[i][j - 1] == 1 and grid[i][j] == 1)
//                {
//                    int left_id = i * n + j - 1;
//                    int current_id = i * n + j;
//                    dsu.merge(left_id, current_id);
//                }
//
//            }
//        }
//
//        vector<int> d = { -1,0,1,0,-1 };
//
//
//        int len_hits = hits.size();
//        vector<int> ans(len_hits);
//
//        for (int i = len_hits-1; i>= 0; i--)
//        {
//            int cur_i = hits[i][0];
//            int cur_j = hits[i][1];
//
//            if (original[cur_i][cur_j] == 0)
//                continue;
//
//            unordered_map<int, int> unique_groups; // <group_id , group_size >
//            bool flag = false;
//
//            for (int k = 0; k < 4; k++)
//            {
//                int nbr_i = cur_i + d[k];
//                int nbr_j = cur_j + d[k + 1];
//                if (nbr_i >= 0 and nbr_i < m and nbr_j >=0 and nbr_j < n )
//                {
//                    if(grid[nbr_i][nbr_j] == 1)
//                    {
//                        int parent = dsu.find_parent(nbr_i * n + nbr_j);
//                        if (parent == m * n)
//                        {
//                            flag = true;
//                        }
//                        else
//                        {
//                            unique_groups[parent] = dsu.get_group_size(nbr_i * n + nbr_j);
//                        }
//                    }
//                }
//            }
//
//            //  [1,0,0,0]
//            //  [1,1,1,0]
//
//            int hit_id = cur_i * n + cur_j;
//            grid[cur_i][cur_j] = 1;
//            if (cur_i == 0)
//            {
//                dsu.merge(m * n, hit_id);
//                flag = true;
//            }
//
//
//
//            int falls = 0;
//            if (flag == true)
//            {
//                for (const auto& kv : unique_groups) 
//                {
//                    falls += kv.second;
//                }
//            }
//
//            ans[i] = falls;
//
//            // merge them 
//            for (int k = 0; k < 4; k++)
//            {
//                int nbr_i = cur_i + d[k];
//                int nbr_j = cur_j + d[k + 1];
//                if (nbr_i >= 0 and nbr_i < m and nbr_j >= 0 and nbr_j < n)
//                {
//                    if(grid[nbr_i][nbr_j] == 1)
//                        dsu.merge(hit_id , nbr_i*n + nbr_j);
//                }
//            }
//        }
//        return ans;
//    }
//};
//
//
//
//
//
//
//
//int main()
//{
//    vector<vector<int>> grid = { {1,0,0,0} ,
//                                 {1,1,0,0} };
//
//    vector<vector<int>> hits = { {1,1},{1,0} };
//
//    Solution s;
//    for (auto v : s.hitBricks(grid, hits)) {
//        cout << v << endl;
//    }
//
//
//
//
//}
//
//
//
//
