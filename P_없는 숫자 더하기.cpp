#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {

    int answer = 0;
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < numbers.size(); i++) {
        arr[numbers[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) {
            answer += i;
        }
    }
    return answer;
}