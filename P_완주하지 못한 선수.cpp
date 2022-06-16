#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    map <string, int> m;

    string answer = "";

    for (int i = 0; i < participant.size(); i++) {
        m[participant[i]]++;
    }

    for (auto i = 0; i < completion.size(); i++) {
        m[completion[i]]--;
    }

    for (auto i = m.begin(); i != m.end(); i++) {
        if (i->second != 0) {
            answer = i->first;
        }
    }
    return answer;
}