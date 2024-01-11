// https://leetcode.com/problems/longest-increasing-subsequence/description/

int lengthOfLIS(vector<int>& nums) {
        // Create a temporary vector to store the increasing subsequence
    vector<int> temp;
    int n = nums.size();
    temp.push_back(nums[0]);

    int len = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] > temp.back()) {
            // If arr[i] is greater than the last element of temp, extend the subsequence
            temp.push_back(nums[i]);
            len++;
        } else {
            // If arr[i] is not greater, replace the element in temp with arr[i]
            int ind = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
            temp[ind] = nums[i];
        }
    }

    return len;
    }