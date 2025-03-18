class Solution {
public:
    int thirdMax(vector<int>& nums) {
    set<int> uniqueNums(nums.begin(), nums.end());
    vector<int> sortedNums(uniqueNums.begin(), uniqueNums.end());
    if (sortedNums.size() < 3) {
        return sortedNums.back();
    }

    return sortedNums[sortedNums.size() - 3];
}

};