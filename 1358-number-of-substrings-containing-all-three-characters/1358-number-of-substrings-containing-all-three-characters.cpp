class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>freq;
        int low=0;
        int res=0;
        for(int high=0; high<s.size(); high++){
            freq[s[high]]++;
            while(freq['a']>0&&freq['b']>0&&freq['c']>0){
                res += s.size()-high;
                freq[s[low]]--;
                low++;
        }}
        return res;
        
    }
};