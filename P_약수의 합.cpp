#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;

    vector <int> v;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(i);
            v.push_back(n/ i);
        }
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++) {
        answer += v[i];
    }

    return answer;
}