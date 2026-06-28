class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int high = s.size()-1;
        for(int i=0; i<s.size(); i++){
            while(low<high){
                int temp = s[low];
                s[low] = s[high];
                s[high] = temp;
                low++;
                high--;
            }
        }
    }
};