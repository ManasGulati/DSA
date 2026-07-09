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
class Solution {
public:
    int dia(TreeNode* root,int &maxi){
        //base case
        if(root==NULL){
            return 0;
        }
        int left=dia(root->left,maxi);
        int right=dia(root->right,maxi);
        if(left+right>maxi){
            maxi=left+right;
        }
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root ){
        int maxi=INT_MIN;
        int ans=dia(root,maxi)-1;
        
        return max(maxi,ans);
        
        
    }
};