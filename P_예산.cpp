#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {

    int answer = 0;
    sort(d.begin(), d.end()); // 1 2 3 4 5

    for (int i = 1; i <= d.size(); i++) {
        int a = 0;
        int b = 0;
        for (int j = 0; j < i; j++) {
            a += d[j];
        }

        for (int j = d.size()-1; j >= d.size() - i; j--) {
                if (j < 0) {
                    break;
                }
                b += d[j];
        }
        if ( (a<= budget && budget <= b) || b < budget) {
            answer = i;
        }
    }

    return answer;
}