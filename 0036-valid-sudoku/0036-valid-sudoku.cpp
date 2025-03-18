class Solution {
public:
    bool isDuplicate(std::vector<char>& nums) {
        std::sort(nums.begin(), nums.end());
        int left = 0, right = 1;
        while (right < nums.size()) {
            if (nums[left] != '.' && nums[left] == nums[right]) {
                return true;
            }
            left++;
            right++;
        }
        return false;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            vector<char> temp;
            for (int j = 0; j < m; j++) {
                temp.push_back(board[i][j]);
            }
            if (isDuplicate(temp))
                return false;
        }
        for (int i = 0; i < m; i++) {
            vector<char> temp;
            for (int j = 0; j < n; j++) {
                temp.push_back(board[j][i]);
            }
            if (isDuplicate(temp))
                return false;
        }

        for (int rmin = 0; rmin < n; rmin += 3) {
            for (int cmin = 0; cmin < m; cmin += 3) {
                vector<char> temp;
                for (int row = rmin; row < rmin + 3; row++) {
                    for (int col = cmin; col < cmin + 3; col++) {
                        temp.push_back(board[row][col]);
                    }
                }
                if (isDuplicate(temp))
                    return false;
            }
        }

        return true;
    }
};