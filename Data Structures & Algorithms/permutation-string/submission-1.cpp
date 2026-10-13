
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int l = 0;
        int r = s1.size() - 1;

        while(r < s2.size()){
            string str = "";
            for(int i = l; i <= r; i ++){
                str += s2[i];
            }

            sort(str.begin(), str.end());
            if(str == s1)
                return true;

            l ++;
            r ++;
        }
        return false;
    }
};