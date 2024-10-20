//using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//#include <algorithm>
//
//
//
//
//class Solution {
//
//
//    vector<vector<string>> ans;
//
//
//    void backTrack(const string& beginWord, deque<string>& path, string current, unordered_map<string, unordered_set<string>> predecessor)
//    {
//        if (current == beginWord)
//        {
//            ans.push_back(vector<string>(path.begin(), path.end()));
//        }
//        else {
//
//            for (auto& pre : predecessor[current])
//            {
//                path.push_front(pre);
//                backTrack(beginWord, path, pre, predecessor);
//                path.pop_front();
//            }
//        }
//    };
//
//
//
//
//public:
//    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//
//        unordered_set < string> wordSet(wordList.begin(), wordList.end());
//
//        unordered_map<string, int> min_steps;
//    
//
//        if (find(wordList.begin(), wordList.end(), endWord) == wordList.end())
//        {
//            return ans;
//        }
//
//        wordSet.erase(beginWord);
//
//        unordered_map < string, unordered_set<string> > predecessor;
//
//        queue<string> q;
//
//
//        q.push(beginWord);
//        int steps = 0;
//
//
//        while (!q.empty())
//        {
//            int len_level = q.size();
//            steps += 1;
//            while (len_level--)
//            {
//                string current = q.front();
//                q.pop();
//
//                if (current == endWord)
//                {
//                    deque<string> path;
//                    path.push_front(endWord);
//                    backTrack(beginWord, path, endWord, predecessor);
//                    return ans;
//                }
//
//                for (int i = 0; i < current.length(); i++)
//                {
//                    for (int c = 97; c < 97 + 26; c++)
//                    {
//                        if (char(c) != current[i])
//                        {
//
//                            char original_char = current[i];
//                            
//                            current[i] = char(c);
//
//                            // current is nbr now 
//
//                            // not a valid nbr
//                            if (wordSet.count(current) == 0)
//                            {
//                                current[i] = original_char;
//                                continue;
//                            }
//
//                          
//
//                            if (min_steps.count(current) > 0 and steps > min_steps[current])
//                            {
//                                current[i] = original_char;  // Revert the change
//                                continue;
//                            }
//
//                            min_steps[current] = steps;
//                            q.push(current);
//
//                            
//                            string original_current = current;
//                            original_current[i] = original_char;
//                            predecessor[current].insert(original_current);
//                            current[i] = original_char;
//
//                        }
//                    }
//                }
//            }
//        }
//        return ans;
//    }
//};
//



