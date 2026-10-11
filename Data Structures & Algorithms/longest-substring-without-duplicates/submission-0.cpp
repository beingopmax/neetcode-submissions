class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int l = 0;
        int r = 0;
        int len = 0;

        while(r < s.size()){
            while(mpp.find(s[r]) != mpp.end()){
                mpp.erase(s[l]);
                l ++;
            }
            
            mpp[s[r]] ++;
            len = max(len, r - l + 1);
            r ++;
        }

        return len;
    }
};
