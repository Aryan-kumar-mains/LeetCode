// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }
        int maxValue = INT_MIN;

        for (auto pair : umap) {
            if (pair.second > maxValue) {
                maxValue = pair.second;
            }
        }

        vector<vector<int>> ans;
        while(maxValue--){
            vector<int> v;
            for(auto x: umap){
                if(x.second != 0){
                    v.push_back(x.first);
                    int key = x.first;
                    umap[key]--;
                }
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};