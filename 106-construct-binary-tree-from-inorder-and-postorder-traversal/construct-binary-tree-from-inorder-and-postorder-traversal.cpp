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
    int find(vector<int> &inorder,int start,int end,int pre){

        int pos=-1;
        for(int i=start;i<=end;i++){
            if(inorder[i]==pre){
                pos=i;
                break;
            }
        }
        return pos;
    }

    TreeNode* Tree(vector<int>& inorder, vector<int>& postorder,int start,int end,int index){

        if(start>end){
            return NULL;

        }

        TreeNode* root=new TreeNode(postorder[index]);
        int pos=find(inorder,start,end,postorder[index]);
        
        root->right=Tree(inorder,postorder,pos+1,end,index-1);
        root->left=Tree(inorder,postorder,start,pos-1,index-(end-pos)-1);
        

        return root;

    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int n=postorder.size();
        TreeNode* temp=Tree(inorder,postorder,0,n-1,n-1);

        return temp;
        
    }
};