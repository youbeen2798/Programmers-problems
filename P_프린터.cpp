#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    vector <pair<int, int>> priorities2;

    for (int i = 0; i < priorities.size(); i++) {
        priorities2.push_back(make_pair(priorities[i], i + 1));
    }

    while (!priorities2.empty()) {

        int max = 0;
        int max_index = 0;

        for (int i = 0; i < priorities2.size(); i++) {
            if (max < priorities2[i].first) {
                max = priorities2[i].first;
                max_index = priorities2[i].second;
            }
        }

        while (1) {
            if (priorities2[0].second != max_index) {
                priorities2.push_back(make_pair(priorities2[0].first, priorities2[0].second));
                priorities2.erase(priorities2.begin());
            }
            else {
                break;
            }
        }
        if (priorities2[0].second == location + 1) {
            answer++;
            return answer;
        }
        else {
            priorities2.erase(priorities2.begin());
            answer++;
        }
    }
}
