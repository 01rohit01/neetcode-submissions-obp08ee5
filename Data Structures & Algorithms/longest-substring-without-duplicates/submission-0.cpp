class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        //optimal apporch
        int left=0;
        int maxLen=0;
        unordered_set<char> st;
        for(int right=0; right<s.size(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen=max(maxLen, right-left+1);
        }
        return maxLen;
        //Brute Force

    //   int n= s.size();
    //   int maxLen=0;

    //   for(int i=0; i<n;i++){
    //     unordered_set<char> st;
    //     for(int j=i; j<n; j++){
    //         if(st.find(s[j]) != st.end()){
    //             break;
    //         }
    //         st.insert(s[j]);
    //         maxLen=max(maxLen, j-i+1);
    //     }
    //   }
    //   return maxLen;
       }

};
