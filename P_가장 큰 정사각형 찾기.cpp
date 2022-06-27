#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int dp[1000][1000];
int map[1000][1000];
int answer = 0;
int solution(vector<vector<int>> board)
{
    int row = board.size();
    int col = board[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            map[i][j] = board[i][j];
            dp[i][j] = board[i][j];
        }
    }

    answer = map[0][0];
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
            if (map[i][j] == 1) {
                dp[i][j] = min({ dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1] }) + 1;
            }
            //            cout << dp[i][j] << "\n";
            if (answer < dp[i][j]) {
                answer = dp[i][j];
            }
        }
    }

    return answer * answer;
}