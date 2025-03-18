class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_set<int> seen;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int start1=0,start2=0;

        while(start1 < nums1.size() && start2 < nums2.size()){
            if(nums1[start1]>nums2[start2]){
                start2++;
            }else if(nums1[start1]<nums2[start2]){
                start1++;
            }else{
                if(seen.find(start1) == seen.end()){
                    intersection.push_back(nums1[start1]);
                    seen.insert(start1);
                }
                start2++;
                start1++;
            }
        }
        return intersection;

    }
};