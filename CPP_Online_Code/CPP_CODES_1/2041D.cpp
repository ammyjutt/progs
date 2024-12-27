//using namespace std;
//#include <iostream>
//#include <vector>
//#include <queue> 
//#include <unordered_map>
//#include <string>
//
//int M, N;
//
//#define dir_str first
//#define indices second
//
//
//unordered_map<string, short int> s_to_ix_mp = {
//    {"U", 0},
//    {"UU", 1},
//    {"UUU", 2},
//    {"R", 3},
//    {"RR", 4},
//    {"RRR", 5},
//    {"D", 6},
//    {"DD", 7},
//    {"DDD", 8},
//    {"L", 9},
//    {"LL", 10},
//    {"LLL", 11},
//};
//
//
//
//const unordered_map<short int,string> ix_to_s_mp = {
//    {0, "U"},
//    {1, "UU"},
//    {2, "UUU"},
//    {3, "R"},
//    {4, "RR"},
//    {5, "RRR"},
//    {6, "D"},
//    {7, "DD"},
//    {8, "DDD"},
//    {9, "L"},
//    {10, "LL"},
//    {11, "LLL"},
//};
//
//
//unordered_map<std::string, std::pair<int, int>> direction_map = {
//    {"U", {-1, 0}},    // Up
//    {"R", {0, 1}},     // Right
//    {"D", {1, 0}},     // Down
//    {"L", {0, -1}}    // Left
//};
//
//
//struct Node {
//public:
//    int i;
//    int j;
//    string state;
//    int cost;
//    Node(int ii, int jj, string s, int c)
//    {
//        i = ii; j = jj;
//        state = s;
//        cost = c;
//    }
//};
//
//
//
//struct cmp {
//
//    bool operator()(Node& first, Node& second)
//    {
//        return first.cost > second.cost;
//    }
//};
//
//
//
//
//int main() {
//     cin >> M >> N;
//
//    vector<vector<char>> grid(M, vector<char>(N));
//
//    priority_queue<Node, vector<Node>, cmp> pq;
//    int end_i, end_j;
//
//    for (int i = 0;i < M; i++)
//    {
//        for (int j = 0;j < N;j++)
//        {
//            cin >> grid[i][j];
//            if (grid[i][j] == 'S')
//            {
//                pq.push(Node(i, j, "#", 0));
//            }
//            if (grid[i][j] == 'T')
//            {
//                end_i = i;
//                end_j = j;
//            }
//        }
//    }
//
//
//    vector<vector<vector<int>>> dp(M, vector<vector<int>>(N, vector<int>(12, INT_MAX)));
//
//
//    auto is_valid = [&](pair<string, pair<int, int>>& nbr, Node& cur) -> bool
//        {
//            int i = cur.i + nbr.indices.first;
//            int j = cur.j + nbr.indices.second;
//            if ((!(i >= 0 and i < M and j >= 0 and j < N)) or (grid[i][j] == '#') or (grid[i][j] == 'S'))
//            {
//                return false;
//            }
//
//            if (nbr.first[0] != cur.state[0])
//                return true;
//
//            return 1 + cur.state.length() <= 3;
//        };
//
//
//    int ans = 0; 
//    while (!pq.empty())
//    {
//        Node cur = pq.top(); pq.pop();
//
//        if (cur.i == end_i and cur.j == end_j)
//        {
//            ans = cur.cost;
//            cout << ans << endl;
//            return 0;
//        }
//                   
//
//        for (auto& kv : direction_map)
//        {
//            pair<string, pair<int, int>> nbr = { kv.first, kv.second };
//
//            if (is_valid(nbr, cur))
//            {
//
//                int nbr_i = cur.i + nbr.second.first;
//                int nbr_j = cur.j + nbr.second.second;
//                int nbr_cost = cur.cost + 1;
//
//                string state;
//
//                if (nbr.first[0] != cur.state[0])
//                    state = nbr.first;
//                else
//                    state = nbr.first + cur.state;
//
//                short int state_ix = s_to_ix_mp[state];
//
//                bool should_insert = true;
//
//                for (int sub = 0; sub <= state_ix % 3; sub++)
//                {
//                    if (dp[nbr_i][nbr_j][state_ix - sub] <= nbr_cost)
//                        should_insert = false;
//                }
//
//
//                if (should_insert)
//                {
//                    dp[nbr_i][nbr_j][state_ix] = nbr_cost;
//                    pq.push(Node(nbr_i, nbr_j, state, nbr_cost));
//                }             
//            }
//        }
//
//    }
//
//
//    cout << -1 << endl;
//    return 0;
//}