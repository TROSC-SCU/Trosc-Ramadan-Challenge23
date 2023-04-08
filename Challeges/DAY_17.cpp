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


// Given the root of a binary tree, return the inorder traversal of its nodes' values.
vector<int>tree;
vector<int> inorderTraversal(TreeNode* root) {
      // write your algorithm here
      if(root!=NULL){
            inorderTraversal(root->left);
            tree.push_back(root->val);
            inorderTraversal(root->right);
      }else{
            return {};
      }return tree;
}
