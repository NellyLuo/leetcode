class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        std::unordered_map<int, bool> map;
        for (auto& i : nums) map.insert(make_pair(i, false));
        for (auto& n:nums) {
            int val1 = n, val2 = n,len = 1;
            decltype(map.find(val1)) iter;
            while ((iter = map.find(--val1)) != map.end() && !iter->second) { iter->second = true; len++; }
            while ((iter = map.find(++val2)) != map.end() && !iter->second) { iter->second = true; len++; }
            res = std::max(res, len);
        }
        return res;
    }
};
