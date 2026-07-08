class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>f;
        int ans =0;
        for(int i=0; i<time.size(); i++){
            int rem = time[i]%60;
            int need = (60-rem)%60;
            ans+=f[need];
            f[rem]++;
        }
        return ans;
    }
};