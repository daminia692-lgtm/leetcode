class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pf(26,0);
        vector<int>sf(26,0);
        for(int i=0; i<p.size(); i++){
            pf[p[i]-'a']++;
        }
        int low=0;
        vector<int>ans;
        for(int high=0; high<s.size(); high++){
            sf[s[high]-'a']++;
            while(high-low+1 > p.size()){
                sf[s[low]-'a']--;
                low++;
            }
            if(high-low+1==p.size()){
                if(pf==sf){
                    ans.push_back(low);
                }
            }
        }
        return ans;
    }
};