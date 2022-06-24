#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    for (int i = 1; i * i <= brown + yellow; i++) {
        if (i * i == brown + yellow) {
            int k = i;
            if ((k - 2) * (k - 2) == yellow) {
                answer.push_back(k);
                answer.push_back(k);
                return answer;
            }
        }
        else if ((brown + yellow) % i == 0) {
            int num1 = (brown + yellow ) / i;
            int num2 = i;

            if ((num1 - 2) * (num2 - 2) == yellow) {
                answer.push_back(num1);
                answer.push_back(num2);
                return answer;
            }

        }
    }
    return answer;
}