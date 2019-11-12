#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    vector<int> ans;
    void DFS(TreeNode *root) {
        if(root == NULL) return;
        else {
            ans.push_back(root->val);
            DFS(root->left);
            DFS(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode *root){
        DFS(root);
        return ans;
    }
};

int main() {

    return 0;
}