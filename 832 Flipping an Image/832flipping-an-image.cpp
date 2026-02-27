class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> result;
        for(int i=0;i<image.size();i++){
            result.push_back({});
            for(int j=image[i].size()-1;j>=0;j--){
                result[i].push_back(0);
            }
        }

        for(int i=0;i<image.size();i++){
            int count = 0;
            for(int j=image[i].size()-1;j>=0;j--){
                result[i][count] = image[i][j] == 1 ? 0 : 1;
                count++;
            }
        }

        return result;
    }
};