#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {

    int answer = 0;
    vector <int> v(n + 1);

    for (int i = 2; i <= sqrt(n); i++) {
        if (v[i] == 1)
            continue;
        else {
            for (int j = 2 * i; j <= n; j += i) {
                v[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (v[i] == 0) {
            answer++;
        }
    }

    return answer;
}