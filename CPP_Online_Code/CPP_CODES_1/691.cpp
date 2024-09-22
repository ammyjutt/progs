//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include<queue>
//
//
//class Solution {
//public:
//
//    void update_freqs(vector<string>& stickers , string& target, vector<vector<short int>>& freqs)
//    {
//
//        auto is_subset = [](vector<short int>& a, vector<short int>& b)->bool {
//            for (int i = 0; i < 26; i++)
//            {
//                if (b[i] > a[i])
//                    return false;
//            }
//            return true;
//        };
//        
//
//   
//        short int len_freqs = freqs.size();
//
//        for (int i = 0; i < freqs.size() ; i++)
//        {
//            for (int j = i + 1; j < freqs.size(); j++)
//            {
//                if ((is_subset(freqs[i], freqs[j])))
//                {
//                    freqs.erase(freqs.begin() + j);
//                    stickers.erase(stickers.begin() + j);
//                    j--;
//                }
//
//            }
//        }
//
//    }
//
//
//
//    int minStickers(vector<string>& stickers, string target) {
//
//
//        short int len_stickers = stickers.size();
//        vector<vector<short int>> freqs(len_stickers, vector<short int>(26, 0));
//
//
//        for (int i = 0; i < len_stickers; i++)
//        {
//            for (const auto& c : stickers[i]) {
//                freqs[i][c - 'a']++;
//            }
//        }
//
//        //update_freqs(stickers , target, freqs);
//
//        len_stickers = stickers.size();
//        
//
//        queue<long long> q;
//        q.push(0LL); // empty target
//        int steps = -1;
//
//        vector<bool> visited(1LL << target.size(), false);
//        visited[0] = true;
//
//        while (not q.empty())
//        {
//            steps += 1;
//            int q_size = q.size();
//            for (int L = 0; L < q_size; L++)
//            {
//                long long current_state = q.front(); q.pop();
//
//                if (current_state == ((1LL << target.size() )- 1))
//                    return steps;
//
//                for (int i = 0; i < len_stickers; i++)
//                {
//                    long long new_state = current_state;
//                    vector<short int> frequency = freqs[i];
//
//
//                    for (int j = 0; j < target.size(); j++)
//                    {
//                        if (!(new_state & (1LL << j)) and (frequency[target[j] - 'a'] > 0)) {
//                            frequency[target[j] - 'a'] -= 1;
//                            new_state |= (1LL << j);
//                        }
//                    }
//
//                    if (!visited[new_state])
//                    {
//                        visited[new_state] = true;
//                        q.push(new_state);
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
//int main()
//{
//
//    Solution s; 
//
//    vector<string> a = { "with","example","science" };
//    cout << s.minStickers(a, "thehat");
//
//
//}
//
//
//
