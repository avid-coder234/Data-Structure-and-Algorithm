class Solution {
public:
void inorder(TreeNode *root,vector<int> &a){
    if(root==NULL){
        return;
    }
    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right,a);
}

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        return v;
    }
};