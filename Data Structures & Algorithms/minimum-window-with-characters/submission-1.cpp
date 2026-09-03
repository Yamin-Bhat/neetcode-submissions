class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.length() , n2 = t.length();
        if(n1 < n2){
            return "";
        }
        unordered_map<char , int> mpp;
        for(auto c : t){
            mpp[c]++;
        }
        int cnt=t.length();
        int l=0,r=0;
        
        int start=-1,minLength=INT_MAX;
        while(r<n1){
            mpp[s[r]]--;
            if(mpp[s[r]]>=0)cnt--;
            while(cnt==0){
               int length=r-l+1;
               if(length<minLength){
                 minLength=length;start=l;
               }
               mpp[s[l]]++;
               if(mpp[s[l]]>0)cnt++;
               l++;
            }
            r++;
        }
        return start==-1?"":s.substr(start,minLength);
    }
};
