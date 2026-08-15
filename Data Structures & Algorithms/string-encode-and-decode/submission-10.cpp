class Solution {
public:

    string encode(vector<string>& strs) {
        string en_str = "";
        
        for(int i = 0 ; i < strs.size() ; i++){
            int n = strs[i].length();
            en_str = en_str + to_string(n) + "*" + strs[i] ;
        }
        return en_str;
    }

    vector<string> decode(string s) {
         
        string temp = "";
        int n = s.length();
        vector<string> ans;
        int i = 0;
        while (i < n){

            if(s[i] == '*'){
                int len = stoi(temp);
                
                ans.push_back(s.substr(i + 1 , len));
                i = i + len + 1;
                temp = "";
                continue;
            }
            temp += s[i];
            i++;
        }
        return ans;
    }
};
