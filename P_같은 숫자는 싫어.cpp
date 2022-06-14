#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size() - 1; i++) {
        answer.push_back(arr[i]);
        int cnt = 0;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j])
                cnt++;
            else
                break;
        }
        i += cnt;
    }

    if (answer[answer.size() - 1] != arr[arr.size() - 1]) {
        answer.push_back(arr[arr.size() - 1]);
    }

    return answer;
}
