class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res(nums.size());
        res[0] = -1;
        stack<int> st;
        st.push(nums[0]);
        for (int i = 2*nums.size(); i >0 ; i--) {
            int idx = i%nums.size();
            while (!st.empty() && st.top() <= nums[idx]) 
                st.pop();
                if (st.empty())
                    res[idx] = -1;
                else
                    res[idx] = st.top();
            st.push(nums[idx]);
        }
        return res;
    }
};