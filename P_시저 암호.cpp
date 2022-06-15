#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            int t = s[i] - '0';
            t += n;
            if (t > 42) {
                s[i] = s[i] + n - 26;
                answer.push_back(s[i]);
            }
            else {
                s[i] = s[i] + n;
                answer.push_back(s[i]);
            }
        }
        else if ('a' <= s[i] && s[i] <= 'z') {
            int t = s[i] - '0'; //49
            t += n;

            if (t > 74) {
                s[i] = s[i] + n - 26;
                answer.push_back(s[i]);
            }
            else {
                s[i] = s[i] + n;
                answer.push_back(s[i]);
            }
        }
        else {
            answer.push_back(s[i]);
        }
    }
    return answer;
}