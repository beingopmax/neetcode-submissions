class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() < t.size())
            return false;

        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;

        for(int i = 0; i < s.size(); i ++){
            mpp1[s[i]] ++;
        }

        for(int i = 0; i < t.size(); i ++){
            mpp2[t[i]] ++;
        }

        for(auto itr : mpp1){
            if(mpp2.find(itr.first) != mpp1.end()){
                if(mpp2[itr.first] != itr.second)
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};
