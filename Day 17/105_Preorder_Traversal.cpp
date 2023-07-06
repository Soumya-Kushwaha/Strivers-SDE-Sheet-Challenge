#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void preorder(Treenode* root, vector<int>& nodes){
    if (root == NULL)
        return;

    nodes.push_back(root->data);
    preorder(root->left, nodes);
    preorder(root->right, nodes);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> nodes;
    preorder(root, nodes);
    return nodes;
}
