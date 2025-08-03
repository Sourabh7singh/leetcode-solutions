class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEl = -1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i] = maxEl;
            maxEl = max(maxEl,temp);
        } 
        return arr;
    }
};