class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int , bool> mp_c;
        unordered_map<int , bool> mp_r;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    mp_r[i] = true;
                    mp_c[j] = true;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
             
            for(int j = 0 ; j < m ; j++){
                if(mp_r[i] == true || mp_c[j] == true){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
