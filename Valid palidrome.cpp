Link:- https://leetcode.com/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        int f=0,l=str.size()-1;
        while(f<l){
            if(str[f++]!=str[l--]){
                return 0;
            }
        }
        return 1;
    }
};
