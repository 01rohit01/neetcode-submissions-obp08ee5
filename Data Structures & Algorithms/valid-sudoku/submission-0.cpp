class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //check row
        for(int i=0; i<9; i++){
            set<char> row;
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')
                continue;

                if(row.count(board[i][j]))
                return false;

                row.insert(board[i][j]);
            }
        }

        //check columns

        for(int j=0; j<9; j++){
            set<char> col;

            for(int i=0; i<9; i++){
                if(board[i][j]=='.')
                continue;

                if(col.count(board[i][j]))
                return false;

                col.insert(board[i][j]);
            }
        }

        //check 3x3 boxes
        for(int boxRow=0; boxRow<9; boxRow +=3){
            for(int boxCol=0; boxCol<9; boxCol +=3){
                set<char> box;

                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        char current = board[boxRow + i][boxCol + j];
                        if(current == '.')
                        continue;

                        if(box.count(current))
                        return false;

                        box.insert(current);
                    }
                }
            }
        }
        return true;
         
    }
};
