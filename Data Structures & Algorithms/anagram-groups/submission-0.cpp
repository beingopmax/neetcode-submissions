class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mpp;
        vector<vector<string>> ans;

        for(int i = 0; i < strs.size(); i++){
            string str = strs[i];
            sort(str.begin(), str.end());

            if(mpp.find(str) == mpp.end()){
                mpp[str] = ans.size();
                ans.push_back({});
            }

            ans[mpp[str]].push_back(strs[i]);
        }

        return ans;
    }
};