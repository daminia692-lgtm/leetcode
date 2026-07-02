class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int low=0;
        int count =0;
        for(int high=0; high<nums.size(); high++){
            f[nums[high]]++;
            if(f[nums[high]]>1){
                return true;
        }
        while(high-low>=k){
            f[nums[low]]--;
            low++;
        }
        }
        return false;
    }
};