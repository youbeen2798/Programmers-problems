#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {

    string answer = "";

    s.push_back(' ');

    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            cnt++;
        }
        else {
            break;
        }
    }

    for (int i = 0; i < cnt; i++) {
        s.erase(s.begin() + 0);
        answer.push_back(' ');
    }

    while (1) {
        for (int i = 0; i < s.size(); i++) {
            bool stop = false;
            if (i % 2 == 0) {
                if ('a' <= s[i] && s[i] <= 'z') {
                    s[i] -= 32;
                }
            }
            else {
                if ('A' <= s[i] && s[i] <= 'Z') {
                    s[i] += 32;
                }
            }

            if (s[i + 1] == ' ') {
                for (int j = 0; j <= i; j++) {
                    answer.push_back(s[0]);
                    s.erase(s.begin() + 0);
                }
                stop = true;
            }
            if (stop) {
                break;
            }
        }

        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                cnt++;
            }
            if (s[i] != ' ') {
                break;
            }
        }

        for (int i = 0; i < cnt; i++) {
            s.erase(s.begin() + 0);
            answer.push_back(' ');
        }

        cout << "s.size(): " << s.size() << "\n";

        if (s.size() == 0) {
            break;
        }
    }

    answer.erase(answer.begin() + answer.size() - 1);
   
    return answer;
}
