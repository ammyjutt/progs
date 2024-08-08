//#include <iostream>
//#include <vector>
//#include <functional>
//#include <chrono>
//
//// Global function
//bool isValidGlobal(const std::vector<std::vector<int>>& grid, const std::vector<std::vector<bool>>& visited, int i, int j, int m, int n) {
//    if (i < 0 || i >= m || j < 0 || j >= n) {
//        return false;
//    }
//    if (grid[i][j] != 0)
//        return false;
//    return visited[i][j] != false;
//}
//
//// Function using lambda
//void usingLambda(const std::vector<std::vector<int>>& grid, const std::vector<std::vector<bool>>& visited) {
//    int m = grid.size();
//    int n = grid[0].size();
//
//    auto isValid = [&](int i, int j) -> bool  {
//        if (i < 0 || i >= m || j < 0 || j >= n) {
//            return false;
//        }
//        if (grid[i][j] != 0)
//            return false;
//        return visited[i][j] != false;
//        };
//
//    // Use the lambda
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            isValid(i, j);
//        }
//    }
//}
//
//// Function using global function
//void usingGlobalFunction(const std::vector<std::vector<int>>& grid, const std::vector<std::vector<bool>>& visited) {
//    int m = grid.size();
//    int n = grid[0].size();
//
//    // Use the global function
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            isValidGlobal(grid, visited, i, j, m, n);
//        }
//    }
//}
//
//int main() {
//    // Setup test data
//    std::vector<std::vector<int>> grid(1000, std::vector<int>(1000, 0));
//    std::vector<std::vector<bool>> visited(1000, std::vector<bool>(1000, false));
//
//    // Test lambda performance
//    auto start = std::chrono::high_resolution_clock::now();
//    usingLambda(grid, visited);
//    auto end = std::chrono::high_resolution_clock::now();
//    auto lambdaDuration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
//
//    // Test global function performance
//    start = std::chrono::high_resolution_clock::now();
//    usingGlobalFunction(grid, visited);
//    end = std::chrono::high_resolution_clock::now();
//    auto globalDuration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
//
//    std::cout << "Lambda duration: " << lambdaDuration.count() << " microseconds\n";
//    std::cout << "Global function duration: " << globalDuration.count() << " microseconds\n";
//
//    return 0;
//}