class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>sf1;
        unordered_map<char,int>tf1;
        for(int i=0; i<s.size(); i++){
            sf1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            tf1[t[i]]++;
        }
        for(auto x : tf1){
            if(sf1[x.first]!=x.second){
                return x.first;
            }
        }
        return ' ';
    }
};