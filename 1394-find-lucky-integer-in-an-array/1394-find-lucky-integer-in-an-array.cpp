class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>f;
        int ans=-1;
        for(int i=0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        for(auto it:f){
            if(it.first==it.second){
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};