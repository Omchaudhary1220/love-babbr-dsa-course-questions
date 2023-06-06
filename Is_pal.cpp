string is palidrome or not without considring special charecter.
Link:-  https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0

#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    string str;
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            str.push_back(tolower(s[i]));
        }
    }
    int first=0,last=str.size()-1;
    while(first<last){
        if(str[first++]!=str[last--]){
            return 0;
        }
    }
    return 1;
}
