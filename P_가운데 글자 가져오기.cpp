#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    if (s.length() % 2 == 1) {
        answer.push_back(s[s.length() / 2]);
    }
    else {
        answer.push_back(s[s.length() / 2 - 1]);
        answer.push_back(s[s.length() / 2]);
    }
    cout << answer;
    return answer;
}

int main() {
    solution("qwer");
}