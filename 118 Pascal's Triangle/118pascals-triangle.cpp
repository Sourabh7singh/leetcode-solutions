class Solution {
public:
vector<int> genrateRow(int row){
    long long int answer = 1;
    vector<int> ans;
    ans.push_back(1);
    for(int col=1;col<row;col++){
        answer = answer * (row-col);
        answer = answer / col;
        ans.push_back(answer);
    }

    return ans;
}
    
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> answers;
    for(int i=1;i<=numRows;i++){
        answers.push_back(genrateRow(i));
    }

    return answers;
    }
};