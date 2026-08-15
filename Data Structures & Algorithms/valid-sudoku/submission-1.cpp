class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        map<int , vector<int>> mp_r;
        map<int , vector<int>> mp_c;
        map<pair<int , int> , vector<int>> mp_s;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                mp_r[i].push_back(board[i][j]);
                mp_c[j].push_back(board[i][j]);
                mp_s[{i/3 , j/3}].push_back(board[i][j]);
            }
        }
        unordered_map<int , int> freq_r;
        for(auto e : mp_r){
            if(e.second.size() == 0){
                continue;
            }
            for(int i = 0 ; i < e.second.size() ; i++){
                freq_r[e.second[i]]++;
                if(freq_r[e.second[i]] > 1){
                    cout << "1false" << endl;
                    return false;
                }
                 
            }
            freq_r.clear();
        }
        unordered_map<int , int> freq_c;
        for(auto e : mp_c){
            if(e.second.size() == 0){
                continue;
            }
            for(int i = 0 ; i < e.second.size() ; i++){
                freq_c[e.second[i]]++;
                if(freq_c[e.second[i]] > 1){
                    cout << "2false" << endl;
                    return false;
                }
                 
            }
            freq_c.clear();
        }
        unordered_map<int , int> freq_s;
        for(auto e : mp_s){
            if(e.second.size() == 0){
                continue;
            }
            for(int i = 0 ; i < e.second.size() ; i++){
                freq_s[e.second[i]]++;
                if(freq_s[e.second[i]] > 1){
                    cout << "3false" << endl;
                    return false;
                }
                 
            }
            freq_s.clear();
        }
        return true;
    }
};
