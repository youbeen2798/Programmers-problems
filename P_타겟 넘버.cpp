#include <string>
#include <vector>

using namespace std;

int answer;

void dfs(vector <int> numbers, int target, int index, int sum, bool sign) {
    if (sign) {
        sum += numbers[index];
        index++;
    }
    else {
        sum -= numbers[index];
        index++;
    }
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
    }
    else {
        dfs(numbers, target, index, sum, true);
        dfs(numbers, target, index, sum, false);
    }
}

int solution(vector<int> numbers, int target) {
    answer = 0;

    dfs(numbers, target, 0, 0, true);
    dfs(numbers, target, 0, 0, false);

    return answer;
}