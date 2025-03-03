class Solution {
public:
    
vector<string> summaryRanges(vector<int>& nums) {
    if (nums.empty()) return {}; 
    vector<string> answer;
    int start = nums[0], end = nums[0];  

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == end + 1) {
            end = nums[i]; 
        } else {
            string ans = (start == end) ? to_string(start) : to_string(start) + "->" + to_string(end);
            answer.push_back(ans);
            
            start = end = nums[i];
        }
    }

    string ans = (start == end) ? to_string(start) : to_string(start) + "->" + to_string(end);
    answer.push_back(ans);

    return answer;
}

};