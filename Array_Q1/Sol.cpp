Personal Solution

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <pair<int,int>> rowcol;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rowcol.emplace_back(i,j);
                }
                
                else{
                    continue;
                }
            }
        }
        
        for(auto t: rowcol){
            for(int p=0;p<c;p++){
                matrix[t.first][p]=0;
            }
            
            for(int p=0;p<r;p++){
                matrix[p][t.second]=0;
            }
        }
    }
};
