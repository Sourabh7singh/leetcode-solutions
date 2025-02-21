class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> answers;
    vector<int> row1 = {1};
    vector<int> row2 = {1,1};
    answers.push_back(row1);

    if(rowIndex==0){
        return answers[rowIndex];
    }

    answers.push_back(row2);
    if(rowIndex==1){
        return answers[rowIndex];
    }
    int cols = 3;
    for(int i=2;i<=rowIndex;i++){
        vector<int> prevRow = answers[i-1];
        vector<int> currentRow;
        currentRow.push_back(1);
        for(int i=1;i<cols-1;i++){
            int currentNumber = prevRow[i-1] + prevRow[i];
            currentRow.push_back(currentNumber);
        }
        currentRow.push_back(1);
        answers.push_back(currentRow);
        cols++;
    }
    return answers[rowIndex];
    }
};