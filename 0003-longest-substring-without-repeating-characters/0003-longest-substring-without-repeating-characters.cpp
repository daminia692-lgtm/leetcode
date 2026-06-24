class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0;
        int res = 0;
        unordered_map<char,int>f;
        for(int high=0; high<s.size(); high++){
             f[s[high]]++;
             while(f[s[high]]>1){
                f[s[low]]--;
                low++;
             }
res = max(res, high-low+1);
        }
        return res;
        
    }
};