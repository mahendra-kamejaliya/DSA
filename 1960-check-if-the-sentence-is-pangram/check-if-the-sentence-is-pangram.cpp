class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool>Alpha(26,0);
        for(int i=0;i<s.size();i++){
            Alpha[s[i]-'a']=1;
        }
         for(int i=0;i<26;i++){
            if(Alpha[i]==0){
                return false;
            }
        }
        return true;
    }
};