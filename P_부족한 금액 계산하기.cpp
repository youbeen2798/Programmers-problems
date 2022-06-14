#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long k = count * (count + 1) / 2;

    long long answer = money - price * k;

    if (answer < 0) {
        return abs(answer);
    }
    else {
        return 0;
    }
}