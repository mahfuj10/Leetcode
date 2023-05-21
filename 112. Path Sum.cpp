/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        TreeNode *head = root;
        if (head == NULL)
            return false;
        if ((head->left == NULL) && (head->right == NULL) && (targetSum - head->val) == 0)
            return true;
        return hasPathSum(head->left, targetSum - head->val) || hasPathSum(head->right, targetSum - head->val);
    }
};