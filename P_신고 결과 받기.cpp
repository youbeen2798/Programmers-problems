#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> reported;
    map<string, bool> done;
    map<string, vector<string>>target;

    for (int i = 0; i < report.size(); i++) {
        string str[2];
        string token;
        stringstream ss(report[i]);

        int index = 0;

        while (ss >> token) {
            str[index] = token;
            index++;
        }

        if (!done[report[i]]) {
            done[report[i]] = true;
            reported[str[1]]++;
            target[str[0]].push_back(str[1]);
        }

    }

    for (int i = 0; i < id_list.size(); i++) {
        int count = 0;

        for (auto itr = target[id_list[i]].begin(); itr < target[id_list[i]].end(); itr++) {
            if (reported[*itr] >= k) {
                count++;
            }
        }
        answer.push_back(count);
    }

    return answer;
}
