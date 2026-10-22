class Solution {
public:
int func(vector<int>&arr, int limit){
    int student =1, pages =0;
    for(int i=0; i<arr.size(); i++){
        if(pages + arr[i]<=limit){
            pages+=arr[i];
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    return student;
}
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int maxi=INT_MIN, sum=0;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int low=maxi, high = sum;
        while(low<=high){
            int mid= (low+high)/2;
            int no_of_student = func(nums,mid);
            if(no_of_student>k) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};