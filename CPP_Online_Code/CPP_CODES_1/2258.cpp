//#include <iostream>
//#include <vector>
//#include <map>
//#include <stack>
//#include <queue>
//using namespace std;
//
//// TODO 
//
//const int MAX_WAIT = 1000000000;
//
//struct Node{
//
//    int i;
//    int j;
//    int walk_time = 0;
//    int wait_time = 0;
//
//    Node(int i, int j, int walk, int wt)
//    {
//        this->i = i;
//        this->j =j;
//        walk_time = walk;
//        wait_time = wt;
//    }  
//};
//
//struct NodeTwo {
//
//    int i;
//    int j;
//    int time = 0;
//
//
//    NodeTwo(int i,int j,int t): i(i) , j(j) , time(t) {}
//};
//
//
//
//class Solution {
//    int ans = -1;
//public:
//    int maximumMinutes(vector<vector<int>>& grid) {
//
//
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<int>> fire_time(m, vector<int>(n,-1));
//        vector<vector<bool>> visited(m, vector<bool>(n, false));
//
//        vector<int> directions = { -1,0,1,0,-1 };
//
//
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (grid[i][j] == 1)
//                {
//                    //spread_fire(i, j);
//
//                    queue<NodeTwo> q;
//                    vector<vector<bool>> my_visited(m, vector<bool>(n, false));
//                    
//
//                    my_visited[i][j] = true;
//                    q.push(NodeTwo(i, j, 0));
//
//                    while (not q.empty()) {
//
//                        NodeTwo cur = q.front();
//                        q.pop();
//                        fire_time[cur.i][cur.j] = fire_time[cur.i][cur.j] == -1 ? cur.time : min(fire_time[cur.i][cur.j], cur.time);
//
//
//                        for (int d = 0; d < 4; ++d)
//                        {
//                            int ni = cur.i + directions[d];
//                            int nj = cur.j + directions[d + 1];
//
//                            if (!(ni < 0 || ni >= m || nj < 0 || nj >= n) && (grid[ni][nj] == 0) && (my_visited[ni][nj] == false))
//                            {
//                                my_visited[ni][nj] = true;
//                                q.push(NodeTwo(ni, nj, cur.time + 1));
//                            }
//                        }
//                    }
//
//
//
//                }
//            }
//        }
//
//     
//
//
//        queue<Node> q;
//
//        q.push(Node(0,0,0,MAX_WAIT));
//        visited[0][0] = true;
//
//        while (not q.empty())
//        {
//
//            Node current = q.front();
//            q.pop();
//            
//            int fireTime = fire_time[current.i][current.j];
//
//
//
//
//            if ((current.i == m - 1) and (current.j == n-1))
//            {
//
//                if (fireTime == -1)
//                {
//                    return 1e9;
//                }
//
//
//                if (fireTime >= current.wait_time + current.walk_time)
//                {
//                    ans = max(ans, current.wait_time);
//                    continue;
//                }
//
//                int max_time_i_could_wait = fireTime - current.walk_time;
//                if (max_time_i_could_wait >= 0)
//                {
//                    ans = max(ans, max_time_i_could_wait);
//                    continue;                    
//                }
//            }
//
//
//
//            // if it intrinsically had fire
//            if (fireTime == 0)
//                continue;
//
//            int max_time_i_can_wait = current.wait_time;
//
//            if (fireTime != -1 and (fireTime <= current.wait_time + current.walk_time))
//            {
//                max_time_i_can_wait = (fireTime - 1) - current.walk_time;
//                if (max_time_i_can_wait < 0)
//                    continue;
//            }
//
//
//
//            for (int d = 0; d < 4; ++d)
//            {
//                int ni = current.i + directions[d];
//                int nj = current.j + directions[d + 1];
//
//                if (!(ni < 0 || ni >= m || nj < 0 || nj >= n) && (grid[ni][nj] == 0) && (visited[ni][nj] == false) or (ni == m - 1 and nj == n - 1))
//                {
//                    visited[ni][nj]=  true;
//                    Node nbr(ni, nj, current.walk_time + 1, max_time_i_can_wait);
//                    q.push(nbr);
//                }
//
//            }
//        }
//
//        return ans;
//    }
//};
//
//
//
//
//int main()
//{
//
//    //std::vector<std::vector<int>> grid = {
//    //    {0, 2, 0, 0, 0, 0, 0},
//    //    {0, 0, 0, 2, 2, 1, 0},
//    //    {0, 2, 0, 0, 1, 2, 0},
//    //    {0, 0, 2, 2, 2, 0, 2},
//    //    {0, 0, 0, 0, 0, 0, 0}
//    //};
//
//    //vector< vector<int>> grid = {
//    //    {0,0,0},
//    //    {2,2,0},
//    //    {1,2,0}
//    //};
//
//
//
//        vector< vector<int>> grid = {
//        {0,0,0,0},
//        {0,1,2,0},
//        {0,2,0,0}
//    };
//
//
//
//        std::vector<std::vector<int>> matrix = {
//        {0, 0, 0, 0, 0},
//        {0, 2, 0, 2, 0},
//        {0, 2, 0, 2, 0},
//        {0, 2, 1, 2, 0},
//        {0, 2, 2, 2, 0},
//        {0, 0, 0, 0, 0}
//        };
//
//
//    Solution s;
//    
//
//    cout << s.maximumMinutes(matrix);
//
//}
//
//
//
