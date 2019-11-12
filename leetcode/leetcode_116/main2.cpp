#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() {}

    Node(int _val, Node *_left, Node *_right, Node *_next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};

class Solution {
public:
    void BFS(Node *root) {
        root->next = NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int len = q.size();
            for(int i = 0; i < len; i++) {
                Node *temp = q.front(); q.pop();
                if(temp->left && temp->right) {
                    q.push(temp->left);q.push(temp->right);
                }
                if(i == len - 1) temp->next = NULL;
                else temp->next = q.front();
            }
        }
    }

    Node *connect(Node *root) {
        if(root == NULL) return NULL;
        BFS(root);
        return root;
    }
};

int main() {

    return 0;
}