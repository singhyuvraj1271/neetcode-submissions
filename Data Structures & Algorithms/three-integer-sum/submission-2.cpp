class Solution {
   public:
    int check(unordered_map<int, vector<int>>& hash, int j, int k, int s) {
        vector<int>& vec = hash[s];

        for (int t = 0; t < vec.size(); t++) {
            if (vec[t] != j && vec[t] != k) {
                return t;
            }
        }
        return -1;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;

        unordered_map<int, vector<int>> hash;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]].push_back(i);
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] <= 0) {
                    int s = 0 - (nums[i] + nums[j]);
                    if (hash.count(s)) {
                        int t = check(hash, i, j, s);

                        if (t != -1) {
                            vector<int> vec;
                            vec.push_back(nums[i]);
                            vec.push_back(nums[j]);
                            vec.push_back(s);

                            sort(vec.begin(), vec.end());
                            result.insert(vec);
                        }
                    }
                }
            }
        }
        vector<vector<int>> output;
        for (auto& p : result) {
            output.push_back(p);
        }

        return output;
    }
};
