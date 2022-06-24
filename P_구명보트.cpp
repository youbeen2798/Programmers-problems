#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {

    sort(people.begin(), people.end());
    int weight;
    int start = 0;
    int end = people.size() - 1;
    int cnt = 0;
    while (start < end) {
        weight = people[start] + people[end];

        if (weight > limit) {
            end--;
        }
        else {
            cnt++;
            start++;
            end--;
        }
    }

    int answer = cnt + (people.size() - cnt * 2);

    return answer;
}

int main() {
    vector <int> people = {70,80,50 };

    cout << solution({ 70,80,50, 50}, 100);
    /*
    int limit = 100;
    int weight;
    int start = 0;
    int end = people.size() - 1;
    int cnt = 0;
    while (start < end) {
        weight = people[start] + people[end];

        if (weight > limit) {
            end--;
        }
        else {
            cnt++;
            start++;
            end--;
        }
    }

    cout << "cnt: " << cnt << "\n";

    int answer = cnt + (people.size() - cnt * 2);

    cout << "answer: " << answer;
    */
}