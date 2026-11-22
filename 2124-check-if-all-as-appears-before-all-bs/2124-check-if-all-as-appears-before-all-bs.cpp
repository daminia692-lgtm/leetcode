class Solution {
public:
    bool checkString(string s) {
        for(int i=1; i<s.size(); i++){
            if(s[i]!='a'&&s[i]!='b'){
                return false;
                break;
            }
            if(s[i]<s[i-1]){
                return false;
            }
        }
        return true;
    }
};