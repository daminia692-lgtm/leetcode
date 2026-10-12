class Solution {
public:
    bool possible(vector<int>&arr, int day, int m, int k){
        long long cnt =0;
        long long bouqet = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                bouqet += (cnt/k);
                cnt =0;
            }
        }
         bouqet += (cnt/k);
         return bouqet>=m;
    }
    int minDays(vector<int>& bloomday, int m, int k) {
        long long low = *min_element(bloomday.begin(), bloomday.end());
        long long high = *max_element(bloomday.begin(), bloomday.end());
        if(1LL*m*k>bloomday.size()){
            return -1;
        }
        while(low<=high){
            long long mid = (low+high)/2;
            if(possible( bloomday, mid, m, k)==true){
                 high = mid -1;
            }
            else low = mid +1;
        }
        return low;
    }
};