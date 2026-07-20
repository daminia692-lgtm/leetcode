class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>f;
        for(int i=0; i<arr.size(); i++){
            f[arr[i]]++;
        }
        unordered_set<int>st;
        for(auto x : f){
            if(st.count(x.second)){
                return false;
            }
            st.insert(x.second);
        }
        return " ";
    }
};