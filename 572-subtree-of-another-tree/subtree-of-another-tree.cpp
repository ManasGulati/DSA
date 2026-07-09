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
    bool iden(TreeNode* &p, TreeNode* &q){
        //base case
        if(p==NULL||q==NULL){
            return p==q;
        }
        bool left=iden(p->left,q->left);
        bool right=iden(p->right,q->right);
        if(!(left&right)){
            return false;
        }
        return(p->val==q->val);
    }

    bool isSubtree(TreeNode* &root, TreeNode* &sroot) {
        if(root==NULL){
            return false;
        }
        if(root->val==sroot->val){
            bool ans=iden(root,sroot);
            if(ans==true){
                return true;
            }
        }
        bool left=isSubtree(root->left,sroot);
        bool right=isSubtree(root->right,sroot);
        return(left|right);
        

    }
};