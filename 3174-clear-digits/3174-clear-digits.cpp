class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string res;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                if (!st.empty())
                    st.pop();
            } else
                st.push(s[i]);
        }

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};