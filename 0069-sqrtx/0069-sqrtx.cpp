class Solution {
public:
    int mySqrt(int n) {
        long long low=1; long long high =n;
      int ans=1;
      if(n==0) return 0;
      while(low<=high){
        long long mid = (low+high)/2;
        long long val = mid*mid;
        if(val<=n){
            ans = mid;
            low= mid+1;
        }
        else high = mid-1;
      }
      return ans;
    }
};