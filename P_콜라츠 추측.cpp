#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {

    long long num2 = num;
    int answer = 0;

    if (num2 == 1) {
        return 0;
    }
    while (answer < 500){ 
         if (num2 % 2 == 0) {
            num2 = num2 / 2;
            answer++;
        }
        else {
            num2 = num2 * 3 + 1;
            answer++;
        }

         if (num2 == 1) {
             return answer;
        }
    }
   
    return -1;
}