class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>f;
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            ans+=f[nums[i]];
                f[nums[i]]++;
            }
        
        return ans;
    }
};