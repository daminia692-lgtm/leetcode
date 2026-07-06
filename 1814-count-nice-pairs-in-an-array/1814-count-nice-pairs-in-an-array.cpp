class Solution {
public:
int rev(int nums){
    long long reverse =0;
    while(nums!=0){
     int digit = nums%10;
    reverse = reverse*10 + digit;
    nums/=10;
    }
    return reverse;
}
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>f;
        long long ans=0;
        const int MOD = 1e9 + 7;
        for(int i=0; i<nums.size(); i++){
            int key = nums[i] - rev(nums[i]);
            ans = (ans +f[key]) % MOD;
            f[key]++;
        }
        return ans;
    }
};