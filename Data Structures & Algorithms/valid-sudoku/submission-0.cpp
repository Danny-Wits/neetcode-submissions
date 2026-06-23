class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row check
        for (const vector<char>& row : board) {
            vector<int> lookUpMap(9, 0);
            for (const char& element : row) {
                if (element != '.') {
                    int num = element - '1';
                    if (lookUpMap[num]) {
                        return false;
                    } else {
                        lookUpMap[num] = 1;
                    }
                }
            }
        }
        // column check
        for (int i = 0; i < 9; i++) {
            vector<int> lookUpMap(9, 0);
            for (int j = 0; j < 9 ; j++) {
                char element = board [j][i];
                if (element != '.') {
                    int num = element - '1';
                    if (lookUpMap[num]) {
                        return false;
                    } else {
                        lookUpMap[num] = 1;
                    }
                }
            }
        }
        // box check
        for (int i = 0; i < 9; i++) {
            vector<int> lookUpMap(9, 0);
            for (int j = 0; j < 9 ; j++) {
                char element = board [j/3 + (i/3)*3][ j %3 + (i%3)*3];
                if (element != '.') {
                    int num = element - '1';
                    if (lookUpMap[num]) {
                        return false;
                    } else {
                        lookUpMap[num] = 1;
                    }
                }
            }
        }
        return true;
    }
};
