class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low=0, res=0, count =0;
        for(int high=0; high<nums.size(); high++){
            if(nums[high]==0){
                count++;
            }
            while(count>1){
                if(nums[low]==0)
                    count--;
                    low++;
            }
            res = max(res,high-low);
        }
        return res;
    }
};