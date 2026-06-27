class Solution {
public:
    int maxVowels(string s, int k) {
        int low=0, count=0, res=0;
        for(int high=0; high<s.size(); high++){
            char ch= s[high];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                count++;
            }
            if(high-low+1>k){
                if(s[low]=='a'||s[low]=='e'||s[low]=='i'||s[low]=='o'||s[low]=='u'){
                    count--;
                }
                low++;}
            
            if(high-low+1==k)
            res = max(res, count);
        }
        return res;
    }
};