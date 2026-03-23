class Solution {
public:
    string reverseWords(string s) {
    int start = 0, end = 0;
    stack<string> st;

    while (end < s.size()) {
        if (s[end] != ' ') {
            end++;
        } else {
            if (end > start) { 
                st.push(s.substr(start, end - start));
            }

            start = end + 1;

            while (start < s.size() && s[start] == ' ') {
                start++;
            }
            end = start;
        }
    }

    if (start < s.size()) {
        st.push(s.substr(start));
    }

    if (st.empty()) return "";

    string rev = st.top();
    st.pop();

    while (!st.empty()) {
        rev += " " + st.top();
        st.pop();
    }

    return rev;
}
};