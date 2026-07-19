class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> f1;
        unordered_map<int, int> f2;
        for (int i = 0; i < nums1.size(); i++) {
            f1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            f2[nums2[i]]++;
        }
        for (auto x : f2) {
            if (f1.count(x.first))
                ans.push_back(x.first);
        }
        return ans;
    }
};