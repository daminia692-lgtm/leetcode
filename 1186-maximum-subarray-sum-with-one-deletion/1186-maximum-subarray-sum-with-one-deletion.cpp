class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = 0;
        int ans = arr[0];
        for(int i=1; i<arr.size(); i++){
            int prev = nodelete;
            nodelete = max(nodelete + arr[i], arr[i]);
            onedelete = max(onedelete + arr[i], prev);
            ans = max({ans, nodelete , onedelete});
        }
        return ans;
    }
};