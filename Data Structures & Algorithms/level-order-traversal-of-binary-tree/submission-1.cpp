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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v1;

        vector<vector<int>> v2;

        if (root!= NULL) {
            q.push(root);
            q.push(nullptr);

            while (!q.empty()) {
                TreeNode* current = q.front();

                if (current != NULL) {
                    if (current->left != NULL) {
                        q.push(current->left);
                    }
                    if (current->right != nullptr) {
                        q.push(current->right);
                    }

                    v1.push_back(current->val);
                    q.pop();
                }

                else {
                    q.pop();
                    if (!q.empty()) {
                        q.push(NULL);
                        v2.push_back(v1);
                        v1.clear();

                    }

                    else {
                        v2.push_back(v1);
                        break;
                    }
                }
          
            }

           
        }

        else{
            v2={};
            
        }

        return v2;

        
    }
};
