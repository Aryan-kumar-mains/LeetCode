// https://leetcode.com/problems/range-sum-of-bst/description/

int rangeSumBSTutil(TreeNode *temp, int low, int high, int &sum){
        if(temp == NULL ) return 0;
        
        if(temp->val <= high && temp->val >= low){
            sum += temp->val;
            cout<<temp->val<< " ";
        }

        // return rangeSumBSTutil(temp->left, low, high, sum) + rangeSumBSTutil(temp->right, low, high, sum);

        if(temp->left) rangeSumBSTutil(temp->left, low, high, sum);
        if(temp->right) rangeSumBSTutil(temp->right, low, high, sum);

        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
       rangeSumBSTutil(root, low, high, sum);
       return sum;
    }