class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> temp;
        int a, b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (temp.find(grid[i][j]) != temp.end()) {
                    a = grid[i][j];
                    break;
                } else {
                    temp.insert(grid[i][j]);
                }
            }
        }

        int actrualSum = 0, gridSum = 0;
        for (int i = 1; i <= n * n; i++) {
            actrualSum += i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                gridSum += grid[i][j];
            }
        }
        b = actrualSum - (gridSum - a);
        return {a, b};
    }
};