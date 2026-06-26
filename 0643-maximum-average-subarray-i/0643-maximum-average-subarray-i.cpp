class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0, high=k-1;
        int res= INT_MIN;
        int sum = 0;
        for(int i=0; i<k; i++)
            sum = sum + nums[i];
            res=sum;
            while(high<nums.size()-1){
                high++;
                sum = sum + nums[high];
                sum-=nums[low];
                low++;
                res=max(res,sum);
            }
        
        return double(res)/k;
    }
};