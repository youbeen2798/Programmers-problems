#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;

    vector <string> hello;

    int hi = 0;

    hello.push_back(words[0]);

    for (int i = 1; i < words.size(); i++) {
        if ((find(hello.begin(), hello.end(), words[i]) == hello.end())
            && (words[i - 1][words[i - 1].size() - 1] == words[i][0]))
        { //���ڿ��� ������
            hello.push_back(words[i]);
        }
        else { //���ڿ��� �����Ѵٸ�
            hi = i;
            break;
        }
    }

    if (hi == 0) {
        answer.push_back(hi);
        answer.push_back(hi);
    }
    else {
        int fist = hi % n + 1;
        answer.push_back(fist);

        int secnd = hi / n + 1;
        answer.push_back(secnd);
    }

    return answer;
}