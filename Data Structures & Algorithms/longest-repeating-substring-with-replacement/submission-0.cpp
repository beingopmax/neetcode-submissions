class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mpp;
        int l = 0;
        int r = 0;

        int ans = 0;
        int maxFrq = 0;

        while(r < s.size()){
            mpp[s[r]] ++;
            maxFrq = max(maxFrq, mpp[s[r]]);
            
            while((r - l + 1) - maxFrq > k){
                mpp[s[l]] --;
                l ++;
            }

            ans = max(ans, r - l + 1);
            r ++;

        }

        return ans;
    }
};
