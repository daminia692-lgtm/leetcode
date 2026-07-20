class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        for (int i : nums1) {
            st1.insert(i);
        }
        for (int i : nums2) {
            st2.insert(i);
        }
        vector<vector<int>> ans;
        vector<int> v1;
        vector<int> v2;
        for (int i : st1) {
            if (st2.count(i) == 0) {
                v1.push_back(i);
            }
        }
        for (int i : st2) {
            if (st1.count(i) == 0) {
                v2.push_back(i);
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};