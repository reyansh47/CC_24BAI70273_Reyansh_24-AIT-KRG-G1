class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size();
        
        function<bool(int,int,int)> dfs = [&](int i,int j,int k){
            if(k==word.size()) return true;
            if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[k]) return false;
            
            char t=board[i][j];
            board[i][j]='#';
            
            bool f = dfs(i+1,j,k+1)||dfs(i-1,j,k+1)||
                     dfs(i,j+1,k+1)||dfs(i,j-1,k+1);
            
            board[i][j]=t;
            return f;
        };
        
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(dfs(i,j,0)) return true;
        
        return false;
    }
};
