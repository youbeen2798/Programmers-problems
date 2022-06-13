#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string st;

int solution(string s) {

    int answer = 0;

    vector <int> num;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            num.push_back(1);
            i += 2;
        }
        else if (s[i] == 'z') {
            num.push_back(0);
            i += 3;
        }
        else if (s[i] == 't') {
            if (s[i + 1] == 'w') {
                num.push_back(2);
                i += 2;
            }
            if (s[i + 1] == 'h') {
                num.push_back(3);
                i += 4;
            }

        }
        else if (s[i] == 'f') {
            if (s[i + 1] == 'o') {
                num.push_back(4);
                i += 3;
            }
            if (s[i + 1] == 'i') {
                num.push_back(5);
                i += 3;
            }
        }
        else if (s[i] == 's') {
            if (s[i + 1] == 'i') {
                num.push_back(6);
                i += 2;
            }
            if (s[i + 1] == 'e') {
                num.push_back(7);
                i += 4;
            }
        }
        else if (s[i] == 'e') {
            num.push_back(8);
            i += 4;
        }
        else if (s[i] == 'n') {
            num.push_back(9);
            i += 3;
        }
        else {
            int k = s[i] - '0';
            num.push_back(k);
        }

    }

    int k = num.size(); //4

    for (int i = 0; i < k; i++) {
        answer += num[i] * pow(10, k - 1 - i);
    }

    return answer;
}