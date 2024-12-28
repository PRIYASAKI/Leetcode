class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int rowidx=m-1;
        int colidx=0;
        while(colidx<n && rowidx>=0)
        {
            if(matrix[rowidx][colidx]==target)
               return true;
            else if(matrix[rowidx][colidx]<target)
               ++colidx;
            else
               --rowidx;
        }
        return false;
    }
};