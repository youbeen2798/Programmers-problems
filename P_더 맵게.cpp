#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++) {
        pq.push(scoville[i]);
    }
    int answer = 0;

    int k = scoville.size() - 1;
    while (k--) {

        int f1 = pq.top();
        pq.pop();
        int f2 = pq.top();
        pq.pop();

        int nw = f1 + 2 * f2;

        pq.push(nw);

        answer++;

        if (pq.top() >= K) {
            return answer;
        }
    }
    return -1;
}

int main() {

    cout <<  solution({ 1, 2, 3, 9, 10, 12 }, 7);

    /*
    vector <int> scoville = { 1, 2, 3, 9, 10, 12 };

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < scoville.size(); i++) {
        pq.push(scoville[i]);
    }

    int k = 7;

    int cnt = 0;

    while (1) {

        int f1 = pq.top();
        pq.pop();
        int f2 = pq.top();
        pq.pop();

        int nw = f1 + 2 * f2;
        
        pq.push(nw);

        cnt++;

        if (pq.top() >= k) {
            break;
        }
    }
    cout << "cnt: " << cnt;
    */
    
}