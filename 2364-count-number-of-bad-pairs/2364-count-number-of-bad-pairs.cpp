class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>f;
        long long ans=0,sum=0;
        long long total = nums.size()*(nums.size()-1)/2;
        for(int i=0; i<nums.size(); i++){
            int key=nums[i]-i;
                ans+=f[key];
                f[key]++;
        }
        return total-ans;
    }
};