class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string ans;
        int i = 0;
        while (i < word.size()) {
            st.push(word[i]);
            if (word[i] == ch) {
                break;
            }
            i++;
        }
        if (i == word.size()) {
            return word;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans + word.substr(i + 1);
    }
};