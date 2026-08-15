class Solution {
public:
    bool isPalindrome(string s) {
        unordered_map<char , int> mp;
        int i = 0 , j = s.length() - 1;
        while(i <= j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(isalpha(s[i]) && isalpha(s[j])){
                char a = tolower(s[i]);
                char b = tolower(s[j]);
                if(a != b){
                    return false;
                }
                i++ , j--;
                continue;
            }
            if(!isalpha(s[i]) && !isalpha(s[j])){
                if(s[i] != s[j]){
                    return false;
                }
                i++ , j--;
                continue;
            }
            else if(isalpha(s[i]) && !isalpha(s[j])){
                return false;
            }
            else if(!isalpha(s[i]) && isalpha(s[j])){
                return false;
            }
        }
        return true;
    }
};
