// https://leetcode.com/problems/leaf-similar-trees/description/

void leafSimilarUtil(TreeNode* root, vector<int> &v){
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            cout<<root->val<<" ";
            return;
        }
        if(root->left)leafSimilarUtil(root->left, v);
        if(root->right)leafSimilarUtil(root->right, v);
        return;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL || root2 == NULL) return false;
        vector<int> v1, v2;


        leafSimilarUtil(root1, v1); cout<<endl;
        leafSimilarUtil(root2, v2);
        if(v1.size() != v2.size()){
            return false;
        }
        
        for(int i = 0; i < v1.size(); i++){
            if(v1[i] != v2[i]){
                return false;
            }
        }

        return true;
    }