#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    int lx1, ly1, rx1, ry1, x2, y2;

    string answer = "";
    vector <int> left;
    vector <int> right;

    int num[4][3] =
    { {'1','2','3'},
      {'4','5','6'},
      {'7','8','9'},
      {'11','0','12'} };

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            left.push_back(numbers[i]);
            answer.push_back('L');
            continue;
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            right.push_back(numbers[i]);
            answer.push_back('R');
            continue;
        }
        else {
            if (numbers[i] == 2) {
                x2 = 0;
                y2 = 1;
            }
            else if (numbers[i] == 5) {
                x2 = 1;
                y2 = 1;
            }
            else if (numbers[i] == 8) {
                x2 = 2;
                y2 = 1;
            }
            else {
                x2 = 3;
                y2 = 1;
            }

            if (left.empty()) {
                lx1 = 3;
                ly1 = 0;
            }
            else {
                int u = left[left.size() - 1];
                if (u == 1) {
                    lx1 = 0;
                    ly1 = 0;
                }
                else if (u == 2) {
                    lx1 = 0;
                    ly1 = 1;
                }
                else if (u == 4) {
                    lx1 = 1;
                    ly1 = 0;
                }
                else if (u == 5) {
                    lx1 = 1;
                    ly1 = 1;
                }

                else if (u == 7) {
                    lx1 = 2;
                    ly1 = 0;
                }
                else if (u == 8) {
                    lx1 = 2;
                    ly1 = 1;
                }
                else if (u == 0) {
                    lx1 = 3;
                    ly1 = 1;
                }

            }
            if (right.empty()) {
                rx1 = 3;
                ry1 = 2;
            }
            else {
                int u = right[right.size() - 1];
                if (u == 2) {
                    rx1 = 0;
                    ry1 = 1;
                }
                else if (u == 3) {
                    rx1 = 0;
                    ry1 = 2;
                }
                else if (u == 5) {
                    rx1 = 1;
                    ry1 = 1;
                }
                else if (u == 6) {
                    rx1 = 1;
                    ry1 = 2;
                }
                else if (u == 8) {
                    rx1 = 2;
                    ry1 = 1;
                }
                else if (u == 9) {
                    rx1 = 2;
                    ry1 = 2;
                }
                else if (u == 0) {
                    rx1 = 3;
                    ry1 = 1;
                }
            }

            int lx = abs(lx1 - x2) + abs(ly1 - y2);
            int rx = abs(rx1 - x2) + abs(ry1 - y2);

            if (lx > rx) {
                answer.push_back('R');
                right.push_back(numbers[i]);
            }
            else if (rx > lx) {
                answer.push_back('L');
                left.push_back(numbers[i]);
            }
            else {
                if (hand == "left") {
                    answer.push_back('L');
                    left.push_back(numbers[i]);
                }
                else {
                    answer.push_back('R');
                    right.push_back(numbers[i]);
                }
            }

        }
    }
    return answer;
}