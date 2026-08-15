class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0 , j = n - 1;

        while(i <= j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            char left = tolower(s[i]);
            char right = tolower(s[j]);

            if(left != right){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }
};
