//using namespace std;
//#include <iostream>
//#include <queue>
//#include <regex>
//#include <unordered_set>
//
//
//
//class Solution {
//
//
//    void update_board(string& board)
//    {
//        int cnt = 0;
//        regex pattern("B{3,}|Y{3,}|G{3,}|R{3,}|W{3,}");
//        while (true)
//        {
//            string old_board = board;
//            board = regex_replace(board, pattern, "");
//            if (old_board == board || board.length() == 0)
//            {
//                return;
//            }
//        }     
//    }
//
//
//
//public:
//    int findMinStep(string board, string hand) {
//
//        queue <pair<string, string>> q;
//        int hand_len = hand.size();
//
//        vector<char> all_chars = { 'R','Y','B','G','W' };
//
//        q.push({ board,hand });
//
//        unordered_set<string> set;
//
//        int ans = 0;
//
//        while (not q.empty()) {
//
//            pair<string, string> current = q.front();
//            q.pop();
//
//            string& current_board = current.first;
//            string& current_hand = current.second;
//
//
//
//            if (current_board.length() == 0)
//            {
//                return hand_len - current_hand.length();
//            }
//
//
//            for (const auto& character : all_chars) {
//
//                size_t ix = current_hand.find(character);
//                if (ix == string::npos) // not found 
//                {
//                    continue;
//                }
//
//
//                string new_hand = current_hand;
//                // pick 
//                new_hand.erase(ix, 1);
//
//
//                // place 
//                int len_current_board = current_board.length(); 
//                for (int i = 0; i < len_current_board; i++)
//                {
//                    string new_board;
//
//                    new_board.reserve(len_current_board + 1);  // Reserve space for the new string
//
//                    new_board.append(current_board, 0, i + 1);  // Copy the first part
//                    new_board.push_back(character);             // Insert the new character
//                    new_board.append(current_board, i + 1, std::string::npos);  // Copy the rest
//
//
//
//
//                    if(current_board[i] == character)
//                        update_board(new_board);
//
//                    string new_state = new_board;
//                    new_state.append(" ").append(new_hand);
//                    if (not set.count(new_state))
//                    {
//                        q.push({ new_board,new_hand });
//                        set.insert(new_state);
//                    }
//                }
//            }
//        }
//        return -1;
//    }
//};
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//	Solution s;
//    
//    cout << s.findMinStep("BGGRRYY", "BBYRG") << endl;
//
//
//
//}
//
//
