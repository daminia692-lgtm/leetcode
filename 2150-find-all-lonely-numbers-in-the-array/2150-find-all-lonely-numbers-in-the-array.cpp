class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
            unordered_map<int,int>f;
            for(int i=0; i<nums.size(); i++){
                f[nums[i]]++;
            }
            vector<int>ans;
            for(int i=0; i<nums.size(); i++){
                if(f[nums[i]]==1&& f.find(nums[i]-1)==f.end()&& f.find(nums[i]+1)==f.end()){
                    ans.push_back(nums[i]);
                }
            }
        return ans;
    }
};