#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int remainder = -1;
    int share = n;

    while (share != 0) {
        remainder = share % 3;
        share = share / 3;

        if (remainder == 0) {
            answer = "4" + answer;
            share--;
        }
        else if (remainder == 1) {
            answer = "1" + answer;
        }
        else if (remainder == 2) {
            answer = "2" + answer;
        }


    }
    return answer;
}

int main() {
    int n;
    cin >> n;

    cout << solution(n);
    /*
    string answer = "";
    int remainder = -1;
    int share = n; 

    while (share != 0) {
        remainder = share % 3; //0
        share = share / 3; //2

        if (remainder == 0) {
            answer = "4" + answer; //4
            share--; //1
        }
        else if (remainder == 1) {
            answer = "1" + answer;
        }
        else if (remainder == 2) {
            answer = "2" + answer;
        }


    }
    cout <<  answer;

    */
}