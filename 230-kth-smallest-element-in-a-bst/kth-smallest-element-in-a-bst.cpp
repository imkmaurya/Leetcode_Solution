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

    void smallest(TreeNode* root,int &k,int &sum){
        if(root==NULL){
            return;
        }

        

        smallest(root->left,k,sum);

        
        if(k){
            sum=root->val;
            k=k-1;
        }
        
        

        smallest(root->right,k,sum);
    }
    int kthSmallest(TreeNode* root, int k) {

        int sum=0;

        smallest(root,k,sum);

        return sum;

        
        
    }
};