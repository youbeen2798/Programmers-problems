#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    int cnt = 0;
    int zero_cnt = 0;
    for (int i = 0; i < lottos.size(); i++) {
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) {
            cnt++;
        }
    }

    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            zero_cnt++;
        }
    }

    int r = 2;
    while (r--) {
        if (cnt <= 1) {
            answer.push_back(6);
        }
        else {
            answer.push_back(7 - cnt);
        }
        cnt += zero_cnt;
    }

    sort(answer.begin(), answer.end());

    return answer;
}