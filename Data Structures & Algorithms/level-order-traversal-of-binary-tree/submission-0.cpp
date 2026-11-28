class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v2;
        if (root == nullptr) return v2; // Fix 3: Handle empty tree

        queue<TreeNode*> q;
        vector<int> v1;
        
        q.push(root);
        q.push(nullptr);

        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop(); // Pop immediately for both cases

            if (current != nullptr) {
                // Fix 1: Only access current->val when current is not null
                v1.push_back(current->val); 
                
                if (current->left != nullptr) {
                    q.push(current->left);
                }
                if (current->right != nullptr) {
                    q.push(current->right);
                }
            } else {
                // Fix 2: Always save the completed level, even on the last one
                v2.push_back(v1);
                v1.clear();

                if (!q.empty()) {
                    q.push(nullptr);
                }
            }
        }
        return v2;
    }
};
