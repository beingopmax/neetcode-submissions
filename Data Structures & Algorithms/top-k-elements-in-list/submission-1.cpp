class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i ++)
            mpp[nums[i]] ++;
        
        vector<pair<int, int>> v(mpp.begin(), mpp.end());

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        });

        int count = 0;
        vector<int> ans;
        for(auto itr : v){
            if(count < k){
                ans.push_back(itr.first);
                count ++;
            }
            else
                break;
        }

        return ans;
    }
};
