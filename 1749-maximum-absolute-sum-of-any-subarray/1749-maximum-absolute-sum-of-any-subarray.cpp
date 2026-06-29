class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending = nums[0];
        int minending = nums[0];
        int ans = abs(nums[0]);
        for(int i=1; i<nums.size(); i++){
            maxending = max(maxending + nums[i], nums[i]);
            minending = min(minending + nums[i], nums[i]);
            int sum = max(abs(maxending), abs(minending));
            ans = max(sum, ans);
        }
        return ans;
    }
};