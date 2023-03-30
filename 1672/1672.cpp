class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;
        int m = accounts.size();
        int n = accounts[0].size();
        wealth.assign(m, 0);
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                wealth[i]+=accounts[i][j];
            }
        }
        return *max_element(wealth.begin(), wealth.end());
    }
};