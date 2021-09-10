#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
bool solve(vector<vector <int>>&board)
        {
            for(int i=0;i<9;i++)
            {
                for(int j=0;j<9;j++)
                {
                    if(board[i][j]==0)
                    {
                        for(int k=1;k<=9;k++)
                        {
                            if(isSafe(board,i,j,k))
                            {
                                board[i][j]=k;
                                if(solve(board)==true)
                                {
                                    return true;
                                }
                                else
                                board[i][j]=0;
                            }
                        }
                        return false;
                    }
                }
            }
            return true;
        }
        bool isSafe(vector<vector <int>>&board, int row, int col, int k)
        {
            for(int i=0;i<9;i++)
            { 
                //checking if the number exists in the same row
                if(board[i][col]==k)
                    return false;
                if(board[row][i]==k)
                    return false;
                if(board[3 * (row / 3) + i / 3][3 * (col/3) + i % 3]==k)
                    return false;
            }
            return true;
        }
};
int main()
{
    vector<vector<int>> board(9,vector<int>(9));
    for(int i=0;i<9;i++)
    {
    for(int j=0;j<9;j++)
    {
        cin>>board[i][j];
    }
    }
    Solution ob;
    ob.solve(board);
    for(int i=0;i<9;i++)
    {
    for(int j=0;j<9;j++)
    {
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}


