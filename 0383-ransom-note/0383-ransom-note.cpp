class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>have;
        for(int i=0; i<magazine.size(); i++){
            have[magazine[i]]++;
        }
        unordered_map<char,int>need;
        for(int i=0; i<ransomNote.size(); i++){
            need[ransomNote[i]]++;
        }
        for(auto i: need){
            if(have[i.first]<i.second){
                return false;
            }
        }
        return true;
    }
};