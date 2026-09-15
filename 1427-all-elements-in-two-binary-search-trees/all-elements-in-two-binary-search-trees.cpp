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
    void inorder(TreeNode* root,vector<int> &ans){
        if(!root){
            return;
        }
        
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        vector<int> ans1;
        vector<int> ans2;
        inorder(root1,ans1);
        inorder(root2,ans2);
        
        vector<int> ans;
        int i=0;
        int j=0;
        int n=ans1.size();
        int m=ans2.size();
        while(i<n && j<m){
            
            if(ans1[i]<ans2[j]){
                ans.push_back(ans1[i]);
                i++;
            }
            else{
                ans.push_back(ans2[j]);
                j++;
            }
        }
        
        while(i<n){
            ans.push_back(ans1[i++]);
            
        }
        while(j<m){
            ans.push_back(ans2[j++]);
            
        }
        
        return ans;


        
    }
};