class Solution {
public:
    void insertAtIndex(vector<int>& arr, int element,int index,int size){
        for(int i=size-1;i>index;i--){
            arr[i] = arr[i-1];
        }
        arr[index] = 0;
    }

    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        for(int i=0;i<size-1;i++){
            if(arr[i]==0) {
                insertAtIndex(arr,0,i+1,size);
                i=i+1;
            }
        }
    }
};