class Solution {
public:
vector<int> findnse(vector<int>& nums) {
        vector<int> res(nums.size());
        res[0] = -1;
        stack<int> st;
        for (int idx = nums.size()-1; idx >=0 ; idx--) {
            while (!st.empty() && nums[st.top()] >= nums[idx]) 
                st.pop();
                if (st.empty())
                    res[idx] = nums.size();
                else
                    res[idx] = st.top();
            st.push(idx);
        }
        return res;
    }
    vector<int> findpse(vector<int>& nums) {
        vector<int> res(nums.size());
        stack<int> st;
        for (int idx = 0; idx <nums.size() ; idx++) {
            while (!st.empty() && nums[st.top()] > nums[idx]) 
                st.pop();
                if (st.empty())
                    res[idx] = -1;
                else
                    res[idx] = st.top();
            st.push(idx);
        }
        return res;
    }
    int sumSubarrayMins(vector<int>& nums) {
          vector<int>nse = findnse(nums);
          vector<int>pse = findpse(nums);
          int mod = 1e9+7;
          int total = 0;
          for(int i=0; i<nums.size(); i++){
            int left = i - pse[i];
            int right = nse[i] - i;
            long long freq = 1LL*nums[i]*left*right;
            total = (total + freq)%mod;
          }
          return total;
    }
};