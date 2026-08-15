class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(string s : strs){
            encoded_string = encoded_string + s + char(s.length());
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        string curr_string = "";
        for(char c : s){
            if(c == char(curr_string.length())){
                decoded_string.push_back(curr_string);
                curr_string = "";
                continue;
            }
            curr_string = curr_string + c;
            
        }
        return decoded_string;
    }
};
