#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int size = nums.size() / 2;

    sort(nums.begin(), nums.end());

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    if (size < nums.size()) {
        return size;
    }
    else {
        return nums.size();
    }
}