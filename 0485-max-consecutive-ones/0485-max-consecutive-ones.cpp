class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low=0, high=0, res = INT_MIN, count=0;
        while(high<nums.size()){
            if(nums[high]==1){
                count++;
            }
            else count=0;
        high++;
res= max(res,count);
        }
        return res;
    }
};