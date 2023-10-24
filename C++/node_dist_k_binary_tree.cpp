/*
Given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.
Leetcode que link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent_track, TreeNode* target) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        if (current->left) {
            parent_track[current->left] = current;
            q.push(current->left);
        }
        if (current->right) {
            parent_track[current->right] = current;
            q.push(current->right);
        }
    }
}

vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    unordered_map<TreeNode*, TreeNode*> parent_track;
    markParents(root, parent_track, target);

    unordered_map<TreeNode*, bool> vis;
    queue<TreeNode*> q;
    q.push(target);
    vis[target] = true;
    int curr_level = 0;
    while (!q.empty()) {
        int size = q.size();
        if (curr_level == k)
            break;
        curr_level++;
        for (int i = 0; i < size; i++) {
            TreeNode *current = q.front();
            q.pop();
            if (current->left && !vis[current->left]) {
                q.push(current->left);
                vis[current->left] = true;
            }
            if (current->right && !vis[current->right]) {
                q.push(current->right);
                vis[current->right] = true;
            }
            if (parent_track[current] && !vis[parent_track[current]]) {
                q.push(parent_track[current]);
                vis[parent_track[current]] = true;
            }
        }
    }
    vector<int> result;
    while (!q.empty()) {
        TreeNode *current = q.front();
        q.pop();
        result.push_back(current->val);
    }
    return result;
}

// Function to build a binary tree from an array representation
TreeNode* buildTree(vector<int>& nodes, int i) {
    if (i >= nodes.size() || nodes[i] == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(nodes[i]);
    root->left = buildTree(nodes, 2 * i + 1);
    root->right = buildTree(nodes, 2 * i + 2);

    return root;
}

int main() {
    vector<int> nodes = {3, 5, 1, 6, 2, 0, 8, -1, -1, 7, 4};
    TreeNode* root = buildTree(nodes, 0);
    TreeNode* target = root->left;
    int k = 2;

    vector<int> result = distanceK(root, target, k);

    cout << "Nodes at distance " << k << " from the target node: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
