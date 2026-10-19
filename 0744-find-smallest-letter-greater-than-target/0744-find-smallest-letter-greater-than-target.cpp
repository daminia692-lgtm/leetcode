class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low =0, high = letters.size()-1;
        int ans = letters.size();
        while(low<=high){
             int mid = (low+high)/2;
             if(letters[mid]>target){
                ans = mid;
                high = mid-1;
             }
             else low = mid+1;
        }
        if (ans == letters.size()) {
            return letters[0];
        }

        return letters[ans];
    }
};