#include <vector>
#include <iostream>
#include <vector>
using namespace std;

bool premium(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int sum;
    for(int i=0; i<nums.size(); i++)
        for (int j = i + 1; j < nums.size(); j++) {
            for (int t = j + 1; t < nums.size(); t++) {
                sum = nums[i] + nums[j] + nums[t];

                if (premium(sum)) {
                    answer++;
                }
            }
        }
    return answer;
}
