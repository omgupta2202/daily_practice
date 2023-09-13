class Solution {
public:
    void recur(vector<int>& nums, vector<int>& ds, vector<int>& freq, vector<vector<int>>& ans) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] == 0) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recur(nums, ds, freq, ans);
                freq[i] = 0; // Reset freq[i] to 0 for backtracking
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        recur(nums, ds, freq, ans);
        return ans;
    }
};
