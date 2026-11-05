class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt =0;
        for(int i=0; i<arr1.size(); i++){
             int low =0, high = arr2.size()-1;
             bool found = false;
            while(low<=high){
                int mid = (low+high)/2;
                if(abs(arr1[i]-arr2[mid])<=d ){
                    found = true;
                    break;
                }
                else if(arr2[mid] <arr1[i] - d) low = mid+1;
                else high = mid-1;
            }
            if(!found) cnt++;
        }
        return cnt;
    }
};