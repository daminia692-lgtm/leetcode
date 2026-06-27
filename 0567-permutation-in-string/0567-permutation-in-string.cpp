class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freqs1(26,0);
        vector<int>freqs2(26,0);
        for(int i=0; i<s1.size(); i++){
            freqs1[s1[i]-'a']++;
        }
        int low=0;
        for(int high=0; high<s2.size(); high++){
            freqs2[s2[high]-'a']++;
        while(high-low+1>s1.size()){
            freqs2[s2[low]-'a']--;
            low++;
        }
        if(high-low+1==s1.size()){
            if(freqs1==freqs2){
                return true;
            }
        }}
        return false;
    }
};