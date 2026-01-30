class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int a,b,cnt = 0;
        for(int i = 0 ; i<8 ; i++){
            for(int j = 0 ; j<8 ; j++){
                if(board[i][j] == 'R'){
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        for(int i = b ; i>=0 ; i--){
            if(board[a][i] == 'B'){
                break;
            }
            if(board[a][i] == 'p'){
                cnt++;
                break;
            }
        }
        for(int i = a ; i>=0 ; i--){
            if(board[i][b] == 'B'){
                break;
            }
            if(board[i][b] == 'p'){
                cnt++;
                break;
            }
        }
        for(int i = a ; i<8 ; i++){
            if(board[i][b] == 'B'){
                break;
            }
            if(board[i][b] == 'p'){
                cnt++;
                break;
            }
        }
        for(int i = b ; i<8 ; i++){
            if(board[a][i] == 'B'){
                break;
            }
            if(board[a][i] == 'p'){
                cnt++;
                break;
            }
        }
        return cnt;
    }

};