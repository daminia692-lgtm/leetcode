class Solution {
public:
 int func(vector<int>& weight, int capacity ){
            int day=1, load =0;
            for(int i=0; i<weight.size(); i++){
                if(load + weight[i]>capacity){
                    day = day +1;
                    load = weight[i];
                }
                else load+=weight[i];
            }
            return day;
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN;
        for(int i=0; i<weights.size(); i++){
            maxi = max(maxi, weights[i]);
        }
        int sum =0;
        for(int i=0; i<weights.size(); i++){
            sum+=weights[i];
        }
        int low = maxi, high = sum;
        while(low<=high){
            int mid = (low+high)/2;
            int no_of_days = func(weights , mid);
            if(no_of_days<=days){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};