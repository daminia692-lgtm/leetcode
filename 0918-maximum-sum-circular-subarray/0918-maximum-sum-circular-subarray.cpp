class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxending = nums[0], maxsum = nums[0];
        int minending = nums[0], minsum = nums[0];
        int res=nums[0];
        int total = nums[0];
        for(int i=  1; i<nums.size(); i++){
            total += nums[i];
            maxending = max(maxending + nums[i], nums[i]);
            maxsum = max(maxsum, maxending);
            minending = min(minending + nums[i], nums[i]);
            minsum = min(minsum, minending);
        }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum,total - minsum);
    }
};