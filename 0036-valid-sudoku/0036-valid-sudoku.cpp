class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>mp;
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[0].size();c++){
                char val=board[r][c];
                if(val!= '.'){
                    string row="r"+to_string(r)+to_string(board[r][c]);
                    string col="c"+to_string(c)+to_string(board[r][c]);
                    int b=(r/3)*3+(c/3);
                    string box= "b"+to_string(b)+to_string(board[r][c]);
                    if(mp[row]!=1 && mp[col]!=1 && mp[box]!=1){
                        mp[row]+=1;
                        mp[col]+=1;
                        mp[box]+=1;
                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};