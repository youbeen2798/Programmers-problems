#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string st)
{
    stack <char> stack;

    stack.push(st[0]);

    for (int i = 1; i < st.size(); i++) {

        if (stack.empty()) {
            stack.push(st[i]);
        }
        else {
            int k = stack.top();

            if (k != st[i]) {
                stack.push(st[i]);
            }
            else {
                stack.pop();
            }
        }

    }

    if (stack.empty()) {
        return 1;
    }
    else {
        return 0;
    }
}
