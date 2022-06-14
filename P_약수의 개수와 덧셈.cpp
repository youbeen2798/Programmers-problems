#include <string>
#include <vector>
#include <iostream>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                count++;
            }
            else {
                cout << "i2: " << i << "\n";
            }
        }
    
    }
    return count;
}
int solution(int left, int right) {

    int answer = 0;

    for (int i = left; i <= right; i++) {
        if (countDivisors(i) % 2 == 0) {
            answer += i;
        }
        else {
            answer -= i;
        }
    }
    return answer;
}