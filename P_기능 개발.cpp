#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    vector <int> days(progresses.size());

    for (int i = 0; i < days.size(); i++) {
        int k = 100 - progresses[i];
        int m = k / speeds[i];

        if (m * speeds[i] == k) {
            days[i] = m;
        }
        else {
            days[i] = m + 1;
        }
    }

    for (int i = 0; i < days.size(); i++) {
        int k = days[i];
        int cnt = 1;
        for (int j = i + 1; j < days.size(); j++) {
            if (days[j] <= k)
                cnt++;
            else
                break;
        }
        answer.push_back(cnt);
        i = i + cnt - 1; // i = 0 + 1 - 1;
    }

    return answer;
}