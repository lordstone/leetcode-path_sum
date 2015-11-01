/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
       if(root == NULL) return false;
       return hasS(root, sum);
    }
    
    bool hasS(TreeNode* root, int sum){
        if(root == NULL) return false;
        if(root -> left == NULL && root -> right == NULL  && sum == root -> val) return true;
        return hasS(root -> left, sum - root -> val) || hasS(root -> right, sum - root -> val);
    }
};
