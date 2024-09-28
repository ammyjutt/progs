//using namespace std;
//#include <vector>
//
//
//class Solution {
//
//    vector<int> directions = { -1,0,1,0,-1 };
//
//public:
//
//    bool fun(int i, int j, vector<vector<int>>& grid, int& mexx, vector<vector<bool>>& visited)
//    {
//        if (i < 0 || j < 0 || i == grid.size() || j == grid.size() || visited[i][j])
//            return false;
//
//        if (grid[i][j] > mexx)
//            return false;
//
//        if (i == grid.size() - 1 and j == grid.size() - 1)
//            return true;
//
//
//        visited[i][j] = true;
//
//        for (int k = 0; k < 4; k++)
//        {
//            if (fun(i+ directions[k], j + directions[k + 1], grid, mexx, visited))
//                return true;
//        }
//        return false;
//    }
//
//
//    bool can_escape(vector<vector<int>>& grid, int& mexx) {
//
//        vector<vector<bool>> visited(grid.size(), vector<bool>(grid.size(), false));
//        return fun(0, 0, grid, mexx, visited);
//
//    }
//
//    int swimInWater(vector<vector<int>>& grid) {
//
//
//        int n = grid.size();
//
//        int left = 0; int right = n*n;
//
//        while (left < right)
//        {
//            int mid = left + (right - left) / 2;
//            if (can_escape(grid, mid))
//                right = mid;
//            else
//                left = mid + 1;
//        }
//
//        return left;
//    }
//};