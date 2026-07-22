class Solution {
public:
    bool isPalindrome(string s) {
      string newString="";
      for(char c:s){
        if(isalnum(c)){
          newString += tolower(c);
        }
        
      }
      return newString == string(newString.rbegin(), newString.rend());
      // string newStr ="";
      // for(char c: s){
      //   if(isalnum(c)){
      //       newStr += tolower(c);
      //   }
      // }
      // return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
