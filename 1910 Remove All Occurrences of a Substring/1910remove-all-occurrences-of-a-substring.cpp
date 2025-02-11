class Solution {
public:
    string removeOccurrences(string s, string part) {
        int k = 0;
    int part_len = part.length();

    while (!s.empty() && k < s.length()) {
        std::string sub_string = s.substr(k, part_len);
        if (sub_string == part) {
            s.erase(k, part_len);
            k = std::max(0, k - part_len);
            continue;
        }
        k++;
    }

    return s;
    }
};