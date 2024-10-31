//#include <climits>
//#include <iostream>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
// 
//class Solution {
//
//    int ans = INT_MIN;
//
//    int fun(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//
//
//        int left = fun(root->left);
//        int right = fun(root->right);
//
//        int this_ans = root->val;
//        this_ans += (left > 0 ? left : 0);
//        this_ += (right > 0 ? right : 0);
//
//        ans = max(ans, this_ans);
//
//        return root->val + max(left, right);
//    }
//
//
//
//public:
//    int maxPathSum(TreeNode* root) {
//
//        fun(root);
//        return ans;
//    }
//};
//
//
//
//
//int main()
//{
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//
//
//    Solution s; 
//    cout << s.maxPathSum(root) << endl;
//
//}
//
//
//
//
