class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal(rowIndex+1);

        for(int i = 0 ; i <=rowIndex ; i++) {
            pascal[i].resize(i + 1);
            for(int j = 0 ; j <= i ; j++) {
                if (j == 0 || j == i) {    // First and last element of each row should always be 1
                    pascal[i][j] = 1;
                } else {    // In other places, add two numbers from the previous row
                    pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
                }
            }
        }
        return pascal[rowIndex];
        
    }
};