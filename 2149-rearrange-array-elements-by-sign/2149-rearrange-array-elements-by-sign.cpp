class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size(), 0);
         int first = 0; int second =1;
         for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                res[second] = nums[i];
                second+=2;
            }
            else{
                res[first] = nums[i];
                first+=2;
            }
         }
         return res;
    }
};