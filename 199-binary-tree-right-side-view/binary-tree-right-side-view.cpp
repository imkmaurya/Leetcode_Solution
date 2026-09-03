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
    
    vector<int> rightSideView(TreeNode* root) {

        if(root==NULL){
            return {};
        }
        queue<TreeNode*> q;
        vector<int> ans;
        
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            int n=q.size();
            
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();

                if(ans.size()==level){
                    ans.push_back(curr->val);
                }

                if(curr->right){
                    q.push(curr->right);
                }
                if(curr->left){
                    q.push(curr->left);
                }
                
            }
            level++;
            
            
            
           
        }


        return ans;



       
        
    }
};