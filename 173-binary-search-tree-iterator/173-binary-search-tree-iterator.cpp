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
class BSTIterator {
public:
    stack<TreeNode*> stt;
    
    void pushAll(TreeNode* root){
        while(root){
            stt.push(root);
            root = root->left;
        }
    }
    
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        if(!stt.empty()){
            TreeNode* temp = stt.top();
            stt.pop();
            if(temp->right){
                pushAll(temp->right);
            }
            return temp->val;
        }
        return -1;
    }
    
    bool hasNext() {
        return !stt.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */