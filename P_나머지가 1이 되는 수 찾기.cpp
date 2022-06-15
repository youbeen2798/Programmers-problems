#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool Eratos(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(int n) {
    int answer = 0;

    n -= 1;

    if (Eratos(n)) {
        return n;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return i;
            }
        }
    }
}