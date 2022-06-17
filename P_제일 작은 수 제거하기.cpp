#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int k = 999999999;

    if (arr.size() == 1) {
        answer.push_back(-1);
    }
    else {
        for (int i = 0; i < arr.size(); i++) {
            k = min(k, arr[i]);
        }
        arr.erase(remove(arr.begin(), arr.end(), k), arr.end());
        answer = arr;
    }
    return answer;
}
