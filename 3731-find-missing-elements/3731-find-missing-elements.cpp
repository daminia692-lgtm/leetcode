class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int>st;
        int mn = INT_MAX , maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mn = min(mn , nums[i]);
            maxi = max(maxi , nums[i]);
            st.insert(nums[i]);
        }
        vector<int>ans;
        for(int i = mn; i <= maxi; i++){
    if(st.find(i) == st.end()){
        ans.push_back(i);
    }
}
        return ans;
    }
};