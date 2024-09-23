void postorder(TreeNode *root,vector<int> &arr){
    if(root == NULL){
        return;
    }
    postorder(root -> left,arr);
    postorder(root -> right,arr);
    arr.push_back(root -> data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    postorder(root,ans);

    return ans;
}