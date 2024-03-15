class Solution {
public:
    bool isIsomorphic(string s, string t) {
         map<char,char>mp;
         set<char>track;
    for(int i=0;i<s.length();i++){
       if(mp.count(s[i])==0 & track.count(t[i])==0){
           mp[s[i]]=t[i];
           track.insert(t[i]);
       }
       else if(mp.count(s[i])==0 & track.count(t[i])){
           return false;
       }
       else if(mp[s[i]]!=t[i]){
           return false;
       }
    }
    return true;
    
    }
};