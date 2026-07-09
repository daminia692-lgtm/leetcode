class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> f;
        int zero = 0, one = 0, res = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) zero++;
            else one++;
            int diff = one - zero;
            if(diff==0){
                res = max(res, i+1);
            }
            if(f.find(diff)==f.end()){
                f[diff] = i;
            }
            else{
                int idx = f[diff];
                int len = i - idx;
                res = max(res, len);
            }
        }
        return res;
    }
};