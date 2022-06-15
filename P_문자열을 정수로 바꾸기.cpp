#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;

    if (s[0] == '-') {
        for (int i = s.size() - 1; i > 0; i--) {
            int k = s[i] - '0';
            answer += k * pow(10, s.size() - 1 - i);
        }
        answer = answer * -1;
    }
    else if (s[0] == '+') {
        for (int i = s.size() - 1; i > 0; i--) {
            int k = s[i] - '0';
            answer += k * pow(10, s.size() - 1 - i);
        }
    }
    else {
        s = s.insert(0, "+");
        for (int i = s.size() - 1; i > 0; i--) {
            int k = s[i] - '0';
            answer += k * pow(10, s.size() - 1 - i);
        }
    }

    return answer;
}