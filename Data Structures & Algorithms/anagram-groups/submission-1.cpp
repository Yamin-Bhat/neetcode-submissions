#include <array>
class Solution {
public:
    // bool isanagram(string &s1 , string &s2){
    //     unordered_map<char , int> mp;
    //     for(int i = 0 ; i < s1.size() ; i++){
    //         mp[s1[i]]++;
    //     }
    //     for(int j = 0 ; j < s2.size() ; j++){
    //         mp[s2[j]]--;
    //     }
    //     for(auto p : mp){
    //         if(p.second != 0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,26>, vector<string>> mp;
        for(string &s : strs){
            array<int , 26> arr = {0};
            for(char c : s){
                arr[c - 'a'] += 1;
            }
            mp[arr].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &p : mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
