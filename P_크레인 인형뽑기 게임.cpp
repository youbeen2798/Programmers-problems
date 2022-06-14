#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {

    vector <int> ans;

    for (int k = 0; k < moves.size(); k++) {
        for (int i = 0; i < board.size(); i++) { //i = 0 1 2 3 4
            if (board[i][moves[k] - 1] != 0) {
                ans.push_back(board[i][moves[k] - 1]);
                board[i][moves[k] - 1] = 0;
                break;
            }
        }
    }

    int answer1 = ans.size();
    int answer;

    while (1) {
        for (int i = 0; i < ans.size() - 1; i++) {
            if (i == ans.size() - 1) {
                break;
            }
            if (ans[i] == ans[i + 1]) {
                ans[i] = 0;
                ans[i + 1] = 0;
            }
        }

        ans.erase(remove(ans.begin(), ans.end(), 0), ans.end());

        if (ans.size() == 0) {
            break;
        }
        int cnt = 0;
        for (int i = 0; i < ans.size() - 1; i++) {
            if (ans[i] != ans[i + 1]) {
                cnt++;
            }
        }
        if (cnt == ans.size() - 1) {
            break;
        }
    }

    answer = answer1 - ans.size();
    return answer;

}